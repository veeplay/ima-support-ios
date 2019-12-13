[<img src="http://veeplay.com/wp-content/themes/veeplay/images/logo_veeplay_small.png">](http://veeplay.com)

## Veeplay Google IMA SDK Plugin for iOS

This plugin enables the iOS [Veeplay Media Player](http://veeplay.com) to use Google's IMA SDK for ads playback

To install:

* Add the following line to your Podfile:

        pod "VeeplayIma"

* Enable playing ads through Google IMA:

        [[APSMediaPlayer sharedInstance] setPreferGoogleIma:YES];

