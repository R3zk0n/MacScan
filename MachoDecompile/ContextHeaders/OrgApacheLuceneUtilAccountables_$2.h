// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILACCOUNTABLES_$2_H
#define ORGAPACHELUCENEUTILACCOUNTABLES_$2_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAccountable-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface OrgApacheLuceneUtilAccountables_$2 : NSObject <OrgApacheLuceneUtilAccountable>

 {
    NSInteger val$bytes_;
    id<JavaUtilCollection> *val$children_;
    NSString *val$description_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(id)initWithLong:(NSInteger)arg0 withJavaUtilCollection:(id)arg1 withNSString:(id)arg2 ;
-(void)dealloc;


@end


#endif