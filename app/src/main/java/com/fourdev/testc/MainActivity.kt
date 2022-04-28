package com.fourdev.testc

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

class MainActivity : AppCompatActivity() {

    init {
        System.loadLibrary("testc")
    }

    private external fun baseUrlFromJNI(): String

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val x = baseUrlFromJNI()

        findViewById<TextView>(R.id.donain).text = x

    }
}