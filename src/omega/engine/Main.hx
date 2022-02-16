package omega.engine;

import openfl.Lib;
import flixel.FlxGame;
import omega.engine.hub.window.MainUI;
import openfl.display.Sprite;

class Main extends Sprite {
  public function new() {
	  super();
	  
		Lib.current.addChild(new FlxGame(0, 0, MainUI, 1, 60, 60, true, false));
  }
}
