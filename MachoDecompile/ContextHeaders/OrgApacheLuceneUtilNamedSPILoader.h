// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILNAMEDSPILOADER_H
#define ORGAPACHELUCENEUTILNAMEDSPILOADER_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneUtilNamedSPILoader : NSObject <JavaLangIterable>

 {
    uint8_t services_;
    IOSClass *clazz_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithIOSClass:(id)arg0 ;
-(id)initWithIOSClass:(id)arg0 withJavaLangClassLoader:(id)arg1 ;
-(void)reloadWithJavaLangClassLoader:(id)arg0 ;
-(id)lookupWithNSString:(id)arg0 ;
-(id)availableServices;
-(id)iterator;
-(void)dealloc;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(void)checkServiceNameWithNSString:(id)arg0 ;


@end


#endif