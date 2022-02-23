package omega.lib.reference.shape;

interface Shape {
  public var width:Int;
  public var height:Int;
  
  public var image:FlxGraphicAsset;
  public var color:FlxColor;
  
  public function new();
}
