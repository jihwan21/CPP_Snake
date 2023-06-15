#pragma once
class Object
{
public:
	Object() {}
	virtual ~Object() {}
	virtual void Update(float eTime) = 0;
	virtual void Render() = 0;
};
