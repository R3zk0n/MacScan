// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVACLASSMETADATA_H
#define JAVACLASSMETADATA_H


#import <Foundation/Foundation.h>


@interface JavaClassMetadata : NSObject {
    *J2ObjcClassInfo data_;
}


@property (readonly) unsigned short version; // ivar: version
@property (readonly, retain) NSString *typeName; // ivar: typeName
@property (readonly, retain) NSString *packageName; // ivar: packageName
@property (readonly, retain) NSString *enclosingName; // ivar: enclosingName
@property (readonly) unsigned short fieldCount; // ivar: fieldCount
@property (readonly) unsigned short methodCount; // ivar: methodCount
@property (readonly) unsigned short modifiers; // ivar: modifiers


-(id)initWithMetadata:(struct J2ObjcClassInfo *)arg0 ;
-(id)qualifiedName;
-(struct J2ObjcMethodInfo *)findMethodInfo:(id)arg0 ;
-(id)findMethodMetadata:(id)arg0 ;
-(id)findMethodMetadataWithJavaName:(id)arg0 argCount:(int)arg1 ;
-(struct J2ObjcFieldInfo *)findFieldInfo:(char *)arg0 ;
-(id)findFieldMetadata:(char *)arg0 ;
-(id)getSuperclassTypeArguments;
-(id)allFields;
-(id)allMethods;
-(id)getInnerClasses;
-(id)getEnclosingMethod;
-(id)genericSignature;
-(id)description;
-(void)dealloc;


@end


#endif