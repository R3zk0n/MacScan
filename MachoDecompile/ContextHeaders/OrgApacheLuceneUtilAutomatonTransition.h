// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONTRANSITION_H
#define ORGAPACHELUCENEUTILAUTOMATONTRANSITION_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilAutomatonTransition : NSObject {
    int source_;
    int dest_;
    int min_;
    int max_;
    int transitionUpto_;
}




-(id)init;
-(id)description;


@end


#endif