// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBUILDER_ARC_H
#define ORGAPACHELUCENEUTILFSTBUILDER_ARC_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstBuilder_Node-Protocol.h"

@interface OrgApacheLuceneUtilFstBuilder_Arc : NSObject {
    int label_;
    id<OrgApacheLuceneUtilFstBuilder_Node> *target_;
    BOOL isFinal_;
    id *output_;
    id *nextFinalOutput_;
}




-(id)init;
-(void)dealloc;
-(void)__javaClone;


@end


#endif