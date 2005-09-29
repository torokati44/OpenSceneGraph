// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgParticle/range>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osgParticle::range< float >, osgParticle::rangef);

TYPE_NAME_ALIAS(osgParticle::range< osg::Vec2 >, osgParticle::rangev2);

TYPE_NAME_ALIAS(osgParticle::range< osg::Vec3 >, osgParticle::rangev3);

TYPE_NAME_ALIAS(osgParticle::range< osg::Vec4 >, osgParticle::rangev4);

BEGIN_VALUE_REFLECTOR(osgParticle::range< float >)
	I_Constructor0();
	I_Constructor2(IN, const float &, mn, IN, const float &, mx);
	I_Method2(void, set, IN, const float &, mn, IN, const float &, mx);
	I_Method0(float, get_random);
	I_Method0(float, get_random_sqrtf);
	I_Method0(float, mid);
	I_ReadOnlyProperty(float, _random);
	I_ReadOnlyProperty(float, _random_sqrtf);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::range< osg::Vec2 >)
	I_Constructor0();
	I_Constructor2(IN, const osg::Vec2 &, mn, IN, const osg::Vec2 &, mx);
	I_Method2(void, set, IN, const osg::Vec2 &, mn, IN, const osg::Vec2 &, mx);
	I_Method0(osg::Vec2, get_random);
	I_Method0(osg::Vec2, get_random_sqrtf);
	I_Method0(osg::Vec2, mid);
	I_ReadOnlyProperty(osg::Vec2, _random);
	I_ReadOnlyProperty(osg::Vec2, _random_sqrtf);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::range< osg::Vec3 >)
	I_Constructor0();
	I_Constructor2(IN, const osg::Vec3 &, mn, IN, const osg::Vec3 &, mx);
	I_Method2(void, set, IN, const osg::Vec3 &, mn, IN, const osg::Vec3 &, mx);
	I_Method0(osg::Vec3, get_random);
	I_Method0(osg::Vec3, get_random_sqrtf);
	I_Method0(osg::Vec3, mid);
	I_ReadOnlyProperty(osg::Vec3, _random);
	I_ReadOnlyProperty(osg::Vec3, _random_sqrtf);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::range< osg::Vec4 >)
	I_Constructor0();
	I_Constructor2(IN, const osg::Vec4 &, mn, IN, const osg::Vec4 &, mx);
	I_Method2(void, set, IN, const osg::Vec4 &, mn, IN, const osg::Vec4 &, mx);
	I_Method0(osg::Vec4, get_random);
	I_Method0(osg::Vec4, get_random_sqrtf);
	I_Method0(osg::Vec4, mid);
	I_ReadOnlyProperty(osg::Vec4, _random);
	I_ReadOnlyProperty(osg::Vec4, _random_sqrtf);
END_REFLECTOR

