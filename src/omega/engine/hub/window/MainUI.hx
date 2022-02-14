package omega.engine.hub.window;

import flixel.FlxState;

class MainUI extends FlxState
{
  public var elapsed:Int = 0;
  
	override public function create()
	{
		super.create();
	}

	override public function update(dt:Float)
	{
		super.update(dt);
    elapsed += dt;
	}
}
