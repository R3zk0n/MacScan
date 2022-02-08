// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSCONCRETECLASS_H
#define IOSCONCRETECLASS_H



#import "IOSClass.h"

@interface IOSConcreteClass : IOSClass {
    Class class_;
    uint8_t interfaces_;
}




-(id)initWithClass:(Class)arg0 ;
-(id)newInstance;
-(id)getSuperclass;
-(BOOL)isInstance:(id)arg0 ;
-(id)getName;
-(id)getSimpleName;
-(id)objcName;
-(BOOL)isAssignableFrom:(id)arg0 ;
-(BOOL)isEnum;
-(BOOL)isAnonymousClass;
-(void)collectMethods:(id)arg0 publicOnly:(BOOL)arg1 ;
-(id)getDeclaredConstructors;
-(id)getConstructors;
-(id)findMethodWithTranslatedName:(id)arg0 checkSupertypes:(BOOL)arg1 ;
-(id)getConstructor:(id)arg0 ;
-(id)getDeclaredConstructor:(id)arg0 ;
-(id)findConstructorWithTranslatedName:(id)arg0 ;
-(id)getInterfacesInternal;
-(void)dealloc;
-(Class)objcClass;


@end


#endif