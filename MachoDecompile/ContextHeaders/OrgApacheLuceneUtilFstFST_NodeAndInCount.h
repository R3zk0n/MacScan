// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTFST_NODEANDINCOUNT_H
#define ORGAPACHELUCENEUTILFSTFST_NODEANDINCOUNT_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneUtilFstFST_NodeAndInCount : NSObject <JavaLangComparable>

 {
    int node_;
    int count_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareToWithId:(id)arg0 ;


@end


#endif