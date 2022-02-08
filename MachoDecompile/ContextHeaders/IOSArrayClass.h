// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSARRAYCLASS_H
#define IOSARRAYCLASS_H



#import "IOSClass.h"

@interface IOSArrayClass : IOSClass {
    IOSClass *componentType_;
}




-(id)initWithComponentType:(id)arg0 ;
-(id)getComponentType;
-(BOOL)isArray;
-(id)getSuperclass;
-(BOOL)isInstance:(id)arg0 ;
-(BOOL)isAssignableFrom:(id)arg0 ;
-(id)getName;
-(id)getSimpleName;
-(id)binaryName;
-(id)objcName;
-(id)getCanonicalName;
-(id)getInterfacesInternal;
-(id)newInstance;
-(char)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif