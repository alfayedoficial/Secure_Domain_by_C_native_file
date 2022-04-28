package com.fourdev.testc

import com.fourdev.testc.AppConstantsBuilder.Companion.developmentUrl
import com.fourdev.testc.AppConstantsBuilder.Companion.productionUrl

/**
 * Created by ( Eng Ali Al Fayed)
 * Class do :
 * Date 4/28/2022 - 2:10 PM
 */
object AppConstants {

    var BASE_URL = if (BuildConfig.DEBUG) developmentUrl() else productionUrl()

}

class AppConstantsBuilder {

   companion object{
       init {
           System.loadLibrary("testc")
       }

       @JvmStatic
       external fun developmentUrl(): String

       @JvmStatic
       external fun productionUrl(): String
   }



}