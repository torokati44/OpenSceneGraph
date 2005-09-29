// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Texture3D>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture3D)
	I_BaseType(osg::Texture);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::Texture3D &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method0(osg::StateAttribute::Type, getType);
	I_Method1(int, compare, IN, const osg::StateAttribute &, rhs);
	I_Method0(GLenum, getTextureTarget);
	I_Method1(void, setImage, IN, osg::Image *, image);
	I_Method0(osg::Image *, getImage);
	I_Method0(const osg::Image *, getImage);
	I_Method1(unsigned int &, getModifiedCount, IN, unsigned int, contextID);
	I_Method2(void, setImage, IN, unsigned, int, IN, osg::Image *, image);
	I_Method1(osg::Image *, getImage, IN, unsigned, int);
	I_Method1(const osg::Image *, getImage, IN, unsigned, int);
	I_Method0(unsigned int, getNumImages);
	I_Method3(void, setTextureSize, IN, int, width, IN, int, height, IN, int, depth);
	I_Method3(void, getTextureSize, IN, int &, width, IN, int &, height, IN, int &, depth);
	I_Method1(void, setSubloadCallback, IN, osg::Texture3D::SubloadCallback *, cb);
	I_Method0(osg::Texture3D::SubloadCallback *, getSubloadCallback);
	I_Method0(const osg::Texture3D::SubloadCallback *, getSubloadCallback);
	I_Method1(void, setNumMipmapLevels, IN, unsigned int, num);
	I_Method0(unsigned int, getNumMipmapLevels);
	I_Method8(void, copyTexSubImage3D, IN, osg::State &, state, IN, int, xoffset, IN, int, yoffset, IN, int, zoffset, IN, int, x, IN, int, y, IN, int, width, IN, int, height);
	I_Method1(void, apply, IN, osg::State &, state);
	I_Property(osg::Image *, Image);
	I_WriteOnlyProperty(unsigned int, NumMipmapLevels);
	I_Property(osg::Texture3D::SubloadCallback *, SubloadCallback);
	I_ReadOnlyProperty(GLenum, TextureTarget);
	I_ReadOnlyProperty(osg::StateAttribute::Type, Type);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Texture3D::Extensions)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID);
	I_Constructor1(IN, const osg::Texture3D::Extensions &, rhs);
	I_Method1(void, lowestCommonDenominator, IN, const osg::Texture3D::Extensions &, rhs);
	I_Method1(void, setupGLExtenions, IN, unsigned int, contextID);
	I_Method1(void, setTexture3DSupported, IN, bool, flag);
	I_Method0(bool, isTexture3DSupported);
	I_Method1(void, setTexture3DFast, IN, bool, flag);
	I_Method0(bool, isTexture3DFast);
	I_Method1(void, setMaxTexture3DSize, IN, GLint, maxsize);
	I_Method0(GLint, maxTexture3DSize);
	I_Method1(void, setTexImage3DProc, IN, void *, ptr);
	I_Method10(void, glTexImage3D, IN, GLenum, target, IN, GLint, level, IN, GLenum, internalFormat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLint, border, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, pixels);
	I_Method1(void, setTexSubImage3DProc, IN, void *, ptr);
	I_Method11(void, glTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, pixels);
	I_Method1(void, setCopyTexSubImage3DProc, IN, void *, ptr);
	I_Method9(void, glCopyTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLint, x, IN, GLint, y, IN, GLsizei, width, IN, GLsizei, height);
	I_Method0(bool, isCompressedTexImage3DSupported);
	I_Method1(void, setCompressedTexImage3DProc, IN, void *, ptr);
	I_Method9(void, glCompressedTexImage3D, IN, GLenum, target, IN, GLint, level, IN, GLenum, internalformat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLint, border, IN, GLsizei, imageSize, IN, const GLvoid *, data);
	I_Method0(bool, isCompressedTexSubImage3DSupported);
	I_Method1(void, setCompressedTexSubImage3DProc, IN, void *, ptr);
	I_Method11(void, glCompressedTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLsizei, imageSize, IN, const GLvoid *, data);
	I_Method1(void, setBuild3DMipmapsProc, IN, void *, ptr);
	I_Method8(void, gluBuild3DMipmaps, IN, GLenum, target, IN, GLint, internalFormat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, data);
	I_WriteOnlyProperty(void *, Build3DMipmapsProc);
	I_WriteOnlyProperty(void *, CompressedTexImage3DProc);
	I_WriteOnlyProperty(void *, CompressedTexSubImage3DProc);
	I_WriteOnlyProperty(void *, CopyTexSubImage3DProc);
	I_WriteOnlyProperty(GLint, MaxTexture3DSize);
	I_WriteOnlyProperty(void *, TexImage3DProc);
	I_WriteOnlyProperty(void *, TexSubImage3DProc);
	I_WriteOnlyProperty(bool, Texture3DFast);
	I_WriteOnlyProperty(bool, Texture3DSupported);
	I_WriteOnlyProperty(unsigned int, upGLExtenions);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture3D::SubloadCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0();
	I_Method2(void, load, IN, const osg::Texture3D &, texture, IN, osg::State &, state);
	I_Method2(void, subload, IN, const osg::Texture3D &, texture, IN, osg::State &, state);
END_REFLECTOR

