package omega.engine;

class Main {
  public function new() {
    Lib.current.addChild(new FlxGame(0, 0, MainUI));
  }
}
