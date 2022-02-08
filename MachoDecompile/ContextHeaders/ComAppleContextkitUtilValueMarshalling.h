// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILVALUEMARSHALLING_H
#define COMAPPLECONTEXTKITUTILVALUEMARSHALLING_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface ComAppleContextkitUtilValueMarshalling : NSObject {
    id<JavaUtilMap> *valueConverters_;
    id<JavaUtilMap> *codeToValueConverter_;
}




-(id)init;
-(void)registerValueConverterWithIOSClass:(id)arg0 withComAppleContextkitUtilValueMarshalling_ValueConverter:(id)arg1 ;
-(id)getValueConverterWithIOSClass:(id)arg0 ;
-(id)getValueConverterWithInt:(int)arg0 ;
-(void)dealloc;
+(id)getDefaultInstance;
+(id)findImplementationClassWithIOSClass:(id)arg0 withJavaUtilMap:(id)arg1 ;
+(void)initialize;


@end


#endif