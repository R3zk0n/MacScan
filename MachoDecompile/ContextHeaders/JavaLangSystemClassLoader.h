// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSYSTEMCLASSLOADER_H
#define JAVALANGSYSTEMCLASSLOADER_H



#import "JavaLangClassLoader.h"

@interface JavaLangSystemClassLoader : JavaLangClassLoader



-(id)init;
-(id)findClassWithNSString:(id)arg0 ;
-(id)findResourceWithNSString:(id)arg0 ;
-(id)findResourcesWithNSString:(id)arg0 ;
-(id)loadClassWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)getResourceWithNSString:(id)arg0 ;
-(id)getResourcesWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif