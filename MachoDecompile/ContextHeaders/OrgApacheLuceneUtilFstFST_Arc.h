// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTFST_ARC_H
#define ORGAPACHELUCENEUTILFSTFST_ARC_H


#import <Foundation/Foundation.h>

#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneUtilFstFST_Arc : NSObject <AutoreleaseLiteSupport>

 {
    int label_;
    id *output_;
    NSInteger node_;
    NSInteger target_;
    char flags_;
    id *nextFinalOutput_;
    NSInteger nextArc_;
    NSInteger posArcsStart_;
    int bytesPerArc_;
    int arcIdx_;
    int numArcs_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(id)copyFromWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 ;
-(BOOL)flagWithInt:(int)arg0 ;
-(BOOL)isLast;
-(BOOL)isFinal;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif