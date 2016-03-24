[Variables]

; NOTICE: Documentation is provided here in english. There are no translations of the documentation available. :(

;=== Generic Variables ===
;~~~ Appearence and Performance Settings ~~~
 UpdateSpeed=20
 ; This is the speed in milliseconds at which Rainmeter updates the skins in this suite.
 ; Faster update speeds result in faster, smoother animations but higher CPU usage
 ; Slower update speeds result in slower, choppy animations but lower CPU usage
 ; 20 is default
 TransitionSpeed1=
 TransitionSpeed2=
 SidebarZPos=1


;~~~ Fonts ~~~
 Font=Segoe UI
 FontBold=Segoe UI Bold
 FontLight=Segoe UI Light


;~~~ Colors ~~~
 BackgroundColor=20,20,20
 ; Determines the background color
 ; Uses the RGB (Red,Green,Blue) format
 ; "0,0,0" is completely black and "255,255,255" is completely white
 BackgroundColorAlpha=230
 ; Determines the alpha (transparency) of the background color
 ; "0" is completely transparent and "255" is completely opaque

 AccentColor=203,48,48
 AccentColorAlpha=128

; NOTE: It is STRONGLY recommended that at least either BackgroundColor and AccentColor or BackgroundColorAlpha
; and AccentColorAlpha be noticably different from each other. If they aren't certain effects (both helpful ones and purely
; aethetical ones) may be hard to see or completely invisible. This is not intended to discourage you from customizing
; the colors to your preference, but rather warning you of potential issues you might encounter under certain circumstances.

 PrimaryColor=203,48,48
 PrimaryColorAlpha=255

 SecondaryColor=120,120,120
 SecondaryColorAlpha=255



;~~~ Updates ~~~
; Note: This also includes variables used in the Update skin.
 AutoCheck=0
 ; This determines whether or not the Charms bar will occasionally check for Rainmeter and RainUpdate updates
 ; in the background. This does not impede or effect the use of the Update skin for manually checking updates.
 ; If set to "0" then the ____ will not check for updates
 ; If set to "1" then the ____ will check for updates


 ;--- Rainmeter Updater ---
 RainmeterVersion=0.0.0.0000
 ; Please do not tamper with this variable. It has been set to 0.0.0.0000 intentionally. If you haven't noticed
 ; already this is NOT the value displayed in the Updater skin. Rather, this is the value used before the Update
 ; skin retrieves the installed version of Rainmeter.
 RainmeterVersionType=Final
 ; This determines the type of Rainmeter updates the Updater skin will look for when there is an internet connection
 ; There are two acceptable values for this variable:
 ;    1. Set to "Final". This will only check for the latest Final release of Rainmeter
 ;    2. Set to "Beta". This will check for the lastest Beta release of Rainmeter. If there are no available Betas it
 ;        will look for the latest Final release.
 RegExp=.*https://github.com/rainmeter/rainmeter/releases/download/v(.*)/Rainmeter
 ; This is the variable is to use retrieve the value of the latest version of Rainmeter from the Rainmeter GitHub site. 
 ;AvailableVersion=AvailableDownloadVersion
 ; Just an obsolete variable I have left here for whatever reason...


 ;--- RainUpdate Updater ---
 RainUpdateVersion=0.9.0
 ; Please do not tamper with this variable. This is used to compare your version of RainUpdate to the latest version of RainUpdate.
 ; Changing this will interfere with the ability of skin to accurately see if there is an update available.

