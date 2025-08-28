struct linear
{
  static float profile(float yStart, float yEnd, float TStart, float TEnd, float y)
  {
    if (y <= yStart)
      return TStart;
    else if (y >= yEnd)
      return TEnd;

    float dy = yEnd - yStart;
    float dT = TEnd - TStart;
    return TStart + (y - yStart) * dT / dy;
  }
};;


