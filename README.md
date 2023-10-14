# AmongUsMenu_Ghost

<p align="center">
   AmongUsMenu is a Cheat Menu for the popular Game Among Us - AmongUsMenu_Ghost is a fork intended to "hide" the client to allow for ToH gameplay and hiding from regular AUM users.
   Development on the original fork has stopped, and I'm not smart enough to keep it updated whenever there is a new Among Us update - Any updates will come when seen on the main branch.
</p>

## Disclaimer
This project is for Educational Use only. We do not condone this software being used to gain an advantage against other people. This project was originally made for a university project to show how cheating software works and how it is possible to block these manipulations in the future.

## Compile (Configurations)
You can compile two different versions of the menu. Normal or Version Proxy.

### Normal (AmongUsMenu.dll)
Inject it with any injector you have.

- Debug (With Debug Information and can be attached to process)
- Release (Optimized with all information stripped)

### Version Proxy (version.dll)
Will automatically be loaded by the Game itself if the dll is in the game directory.

- Debug_Version (With Debug Information and can be attached to process)
- Release_Version (Optimized with all information stripped)

### Running on Proton (Version Proxy Only)
First you will need protontricks, you can install it with your packager of choice.

1. Make sure you are running Among Us under Proton  
   You can check by going to **Properties -> Compatibility**
3. Put version.dll into Among Us folder
4. Run `protontricks --gui`
5. Choose **Among Us**
6. Click on **Select the default wineprefix** and then **OK**
7. Click on **Run winecfg** and then **OK**
8. In the configuration window, click on **Libraries**
9. Type `version` into the **New override for library** input
10. Click **Add** and then **Apply**
11. AmongUsMenu should now work properly in the game

### Default Hotkeys
- Show Menu - DELETE
- Show Radar - INSERT
- Show Console - HOME
- Show Replay - END
- Repair Sabotage - PAGE DOWN (PgDn)

## Screenshot
<p align="center">
   <img src="screenshot.png">
</p>

## Special Thanks
* [BitCrackers](https://github.com/BitCrackers) (Creating the original that this was forked from)
* [cddjr](https://github.com/cddjr) (Keeping the original updated/supported long after development was officially ended)
* [KulaGGin](https://github.com/KulaGGin) (Helped with some ImGui code for replay system)
* [tomsa000](https://github.com/tomsa000) (Helped with fixing memory leaks and smart pointers)
* Everyone else who contributed to the code and that couldn't be listed here. Thank you!

## Contributing

1. Fork it (<https://github.com/BitCrackers/AmongUsMenu/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request
