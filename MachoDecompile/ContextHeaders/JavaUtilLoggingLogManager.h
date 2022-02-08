// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGLOGMANAGER_H
#define JAVAUTILLOGGINGLOGMANAGER_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashtable.h"
#import "JavaUtilProperties.h"
#import "JavaBeansPropertyChangeSupport.h"

@interface JavaUtilLoggingLogManager : NSObject {
    JavaUtilHashtable *loggers_;
    JavaUtilProperties *props_;
    JavaBeansPropertyChangeSupport *listeners_;
}




-(id)init;
-(void)checkAccess;
-(BOOL)addLoggerWithJavaUtilLoggingLogger:(id)arg0 ;
-(void)addToFamilyTreeWithJavaUtilLoggingLogger:(id)arg0 withNSString:(id)arg1 ;
-(id)getLoggerWithNSString:(id)arg0 ;
-(id)getLoggerNames;
-(id)getPropertyWithNSString:(id)arg0 ;
-(void)readConfiguration;
-(void)readConfigurationImplWithJavaIoInputStream:(id)arg0 ;
-(void)readConfigurationWithJavaIoInputStream:(id)arg0 ;
-(void)reset;
-(void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg0 ;
-(void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg0 ;
-(id)getOrCreateWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)setParentWithJavaUtilLoggingLogger:(id)arg0 withJavaUtilLoggingLogger:(id)arg1 ;
-(void)setLevelRecursivelyWithJavaUtilLoggingLogger:(id)arg0 withJavaUtilLoggingLevel:(id)arg1 ;
-(void)dealloc;
+(id)getLoggingMXBean;
+(void)checkConfiguration;
+(id)getLogManager;
+(id)getInstanceByClassWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif