// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAFIELDMETADATA_H
#define JAVAFIELDMETADATA_H


#import <Foundation/Foundation.h>


@interface JavaFieldMetadata : NSObject {
    *J2ObjcFieldInfo data_;
}




-(id)initWithMetadata:(struct J2ObjcFieldInfo *)arg0 ;
-(id)name;
-(id)iosName;
-(id)javaName;
-(int)modifiers;
-(id)type;
-(*void)staticRef;
-(*unk)getConstantValue:(unsigned short)arg0 ;
-(id)genericSignature;


@end


#endif