#import <React/RCTBridgeModule.h>
#import <InBrainSurveys/InBrainSurveys.h>
#import <React/RCTComponent.h>
#import <React/RCTEventEmitter.h>

@interface InBrainSurveys : RCTEventEmitter <RCTBridgeModule, InBrainDelegate>

@property(nonatomic) InBrain* inbrain; // InBrain instance
 
@end
