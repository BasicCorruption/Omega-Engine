package omega.engine.hub.window;

import flixel.FlxState;

class MainUI extends FlxState {
	
  	public var elapsed:Int = 0;
	
	// Header
	public var title:FlxText;
  
	override public function create() {
		
		super.create();
		
		title = new FlxText(0, 0, 0, "Omega").setFormat("monsterrat", 24);
		title.screenCenter(X);
		add(title);
		
	}

	override public function update(dt:Float) {
		
		super.update(dt);
    		elapsed += dt;
		
	}
	
}
