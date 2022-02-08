// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTUTIL_TIEBREAKBYINPUTCOMPARATOR_H
#define ORGAPACHELUCENEUTILFSTUTIL_TIEBREAKBYINPUTCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilComparator-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneUtilFstUtil_TieBreakByInputComparator : NSObject <JavaUtilComparator>

 {
    id<JavaUtilComparator> *comparator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilComparator:(id)arg0 ;
-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;


@end


#endif