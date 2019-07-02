package com.cagataykolus.loggingapp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tvSampleText = findViewById(R.id.tv_sample_text);
        tvSampleText.setText(NativeLibrary.helloWorld());

        String str = "Just an example";

        NativeLibrary.logError(str);
        NativeLibrary.logWarn(str);
        NativeLibrary.logDebug(str);
        NativeLibrary.logInfo(str);
    }
}