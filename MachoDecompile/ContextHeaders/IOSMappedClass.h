// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSMAPPEDCLASS_H
#define IOSMAPPEDCLASS_H


#import <Foundation/Foundation.h>

#import "IOSConcreteClass.h"

@interface IOSMappedClass : IOSConcreteClass {
    NSString *package_;
    NSString *name_;
}




-(id)initWithClass:(Class)arg0 package:(id)arg1 name:(id)arg2 ;
-(id)getName;
-(id)getSimpleName;
-(id)objcName;
-(id)getPackage;
-(void)collectMethods:(id)arg0 publicOnly:(BOOL)arg1 ;
-(id)getDeclaredConstructors;
-(id)getConstructors;
-(BOOL)isEnum;
-(BOOL)isAnonymousClass;


@end


#endif