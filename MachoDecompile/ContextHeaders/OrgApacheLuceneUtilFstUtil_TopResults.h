// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTUTIL_TOPRESULTS_H
#define ORGAPACHELUCENEUTILFSTUTIL_TOPRESULTS_H


#import <Foundation/Foundation.h>

#import "JavaLangIterable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneUtilFstUtil_TopResults : NSObject <JavaLangIterable>

 {
    BOOL isComplete_;
    id<JavaUtilList> *topN_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBoolean:(BOOL)arg0 withJavaUtilList:(id)arg1 ;
-(id)iterator;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif