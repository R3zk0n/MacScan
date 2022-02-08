// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILSERVICELOADER_H
#define JAVAUTILSERVICELOADER_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaLangClassLoader.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface JavaUtilServiceLoader : NSObject <JavaLangIterable>

 {
    IOSClass *service_;
    JavaLangClassLoader *classLoader_;
    id<JavaUtilSet> *services_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithIOSClass:(id)arg0 withJavaLangClassLoader:(id)arg1 ;
-(void)reload;
-(id)iterator;
-(void)internalLoad;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(id)load__WithIOSClass:(id)arg0 withJavaLangClassLoader:(id)arg1 ;
+(id)load__WithIOSClass:(id)arg0 ;
+(id)loadInstalledWithIOSClass:(id)arg0 ;
+(id)loadFromSystemPropertyWithIOSClass:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif