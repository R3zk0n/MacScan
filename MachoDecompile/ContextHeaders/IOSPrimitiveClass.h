// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSPRIMITIVECLASS_H
#define IOSPRIMITIVECLASS_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"

@interface IOSPrimitiveClass : IOSClass {
    NSString *name_;
    NSString *type_;
}




-(id)initWithName:(id)arg0 type:(id)arg1 ;
-(id)getName;
-(id)getSimpleName;
-(id)getCanonicalName;
-(id)objcName;
-(id)description;
-(BOOL)isAssignableFrom:(id)arg0 ;
-(BOOL)isInstance:(id)arg0 ;
-(int)getModifiers;
-(id)getDeclaredMethods;
-(id)getMethod:(id)arg0 ;
-(id)getDeclaredMethod:(id)arg0 ;
-(id)getConstructorWithClasses:(id)arg0 ;
-(BOOL)isPrimitive;
-(char)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)binaryName;
-(Class)objcArrayClass;
-(NSUInteger)getSizeof;
-(id)__boxValue:(*unk)arg0 ;
-(id)wrapperClass;
-(BOOL)__unboxValue:(id)arg0 toRawValue:(*unk)arg1 ;
-(void)__readRawValue:(*unk)arg0 fromAddress:(*void)arg1 ;
-(void)__writeRawValue:(*unk)arg0 toAddress:(*void)arg1 ;
-(BOOL)__convertRawValue:(*unk)arg0 toType:(*void)arg1 ;
-(void)dealloc;


@end


#endif