// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTFIELD_H
#define JAVALANGREFLECTFIELD_H


#import <Foundation/Foundation.h>

#import "JavaLangReflectAccessibleObject.h"
#import "IOSClass.h"
#import "JavaFieldMetadata.h"
#import "JavaLangReflectMember-Protocol.h"

@interface JavaLangReflectField : JavaLangReflectAccessibleObject <JavaLangReflectMember>

 {
    *objc_ivar ivar_;
    IOSClass *declaringClass_;
    JavaFieldMetadata *metadata_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithIvar:(struct objc_ivar *)arg0 withClass:(id)arg1 withMetadata:(id)arg2 ;
-(id)getName;
-(id)getWithId:(id)arg0 ;
-(BOOL)getBooleanWithId:(id)arg0 ;
-(char)getByteWithId:(id)arg0 ;
-(unsigned short)getCharWithId:(id)arg0 ;
-(CGFloat)getDoubleWithId:(id)arg0 ;
-(float)getFloatWithId:(id)arg0 ;
-(int)getIntWithId:(id)arg0 ;
-(NSInteger)getLongWithId:(id)arg0 ;
-(short)getShortWithId:(id)arg0 ;
-(void)setWithId:(id)arg0 withId:(id)arg1 ;
-(void)setBooleanWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)setByteWithId:(id)arg0 withByte:(char)arg1 ;
-(void)setCharWithId:(id)arg0 withChar:(unsigned short)arg1 ;
-(void)setDoubleWithId:(id)arg0 withDouble:(CGFloat)arg1 ;
-(void)setFloatWithId:(id)arg0 withFloat:(float)arg1 ;
-(void)setIntWithId:(id)arg0 withInt:(int)arg1 ;
-(void)setLongWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)setShortWithId:(id)arg0 withShort:(short)arg1 ;
-(id)getType;
-(id)getGenericType;
-(int)getModifiers;
-(id)getDeclaringClass;
-(id)propertyName;
-(BOOL)isSynthetic;
-(BOOL)isEnumConstant;
-(id)toGenericString;
-(id)getDeclaredAnnotations;
-(int)unsafeOffset;
-(char)isEqual:(id)arg0 ;
-(void)dealloc;
+(id)fieldWithIvar:(struct objc_ivar *)arg0 withClass:(id)arg1 withMetadata:(id)arg2 ;
+(id)propertyName:(id)arg0 ;
+(id)variableName:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif