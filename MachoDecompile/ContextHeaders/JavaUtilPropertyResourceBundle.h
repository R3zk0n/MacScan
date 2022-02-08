// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILPROPERTYRESOURCEBUNDLE_H
#define JAVAUTILPROPERTYRESOURCEBUNDLE_H



#import "JavaUtilResourceBundle.h"
#import "JavaUtilProperties.h"

@interface JavaUtilPropertyResourceBundle : JavaUtilResourceBundle {
    JavaUtilProperties *resources_;
}




-(id)initWithJavaIoInputStream:(id)arg0 ;
-(id)initWithJavaIoReader:(id)arg0 ;
-(id)handleKeySet;
-(id)getLocalKeys;
-(id)getKeys;
-(id)handleGetObjectWithNSString:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif