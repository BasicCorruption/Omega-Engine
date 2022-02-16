package omega.engine.hub.window;

import flixel.FlxState;

import flixel.text.FlxText;

class MainUI extends FlxState {
	public var elapsed:Float = 0;

	// Header
	public var title:FlxText;

	override public function create() {
		super.create();

		title = new FlxText(0, 0, 0, "Omega Engine").setFormat("res/monsterrat.ttf", 48);
		title.screenCenter(X);
		add(title);
	}

	override public function update(dt:Float) {
		super.update(dt);
		elapsed += dt;
	}
}
