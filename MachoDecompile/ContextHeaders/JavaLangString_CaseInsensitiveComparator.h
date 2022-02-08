// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTRING_CASEINSENSITIVECOMPARATOR_H
#define JAVALANGSTRING_CASEINSENSITIVECOMPARATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilComparator-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaLangString_CaseInsensitiveComparator : NSObject <JavaUtilComparator, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif