//
//  CXP+PubSub.h
//  BackbaseCXP
//
//  Created by Backbase R&D B.V. on 17/06/15.
//
#import <BackbaseCXP/BackbaseCXP.h>

@interface CXP (PubSub)
/**
 * Registers an object's selector to observe an especific event.
 * @param obj The object owner of the selector to be called when an event occurs.
 * @param selector Selector to be executed. It must receive only one parameter NSNotification.
 * @param eventName The name of the event listening to.
 */
+ (void)registerObserver:(id)obj selector:(SEL)selector forEvent:(NSString*)eventName;

/**
 * Unregisters an object as respondant to the navigation flow events.
 * @param obj The object that is responding to the navigation events.
 * @param eventName The name of the event to unsubscribe from.
 */
+ (void)unregisterObserver:(id)obj forEvent:(NSString*)eventName;

/**
 * Unregisters an object as respondant to all its registered events.
 * @param obj The object that is responding to the events.
 */
+ (void)unregisterObserverFromAll:(id)obj;

/**
 * Publishes an event with an especific payload to whoever is listening to it (natively or in a webview)
 * @param eventName The name of the event to be published.
 * @param jsonObject The payload to be passed as information to the event. May be nil or a JSON compatible object.
 */
+ (void)publishEvent:(NSString*)eventName payload:(NSDictionary*)jsonObject;

/**
 * Publishes an event with an especific payload to whoever is listening to it (natively or in a webview)
 * @param eventName The name of the event to be published.
 * @param object The object originating this event. This is required when sending messages from native widgets to
 * identify the source properly.
 * @param jsonObject The payload to be passed as information to the event. May be nil or a JSON compatible object.
 */
+ (void)publishEvent:(NSString*)eventName object:(id)object payload:(NSDictionary*)jsonObject;
@end
