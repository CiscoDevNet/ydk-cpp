#ifndef _IETF_DIFFSERV_ACTION_
#define _IETF_DIFFSERV_ACTION_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_diffserv_policy.hpp"

namespace ietf {
namespace ietf_diffserv_action {

class AlgorithmicDrop : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        AlgorithmicDrop();
        ~AlgorithmicDrop();


}; // AlgorithmicDrop

class DropType : public virtual ydk::Identity
{
    public:
        DropType();
        ~DropType();


}; // DropType

class Meter : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Meter();
        ~Meter();


}; // Meter

class Priority : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Priority();
        ~Priority();


}; // Priority

class MinRate : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        MinRate();
        ~MinRate();


}; // MinRate

class Marking : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Marking();
        ~Marking();


}; // Marking

class MaxRate : public ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        MaxRate();
        ~MaxRate();


}; // MaxRate

class MeterActionType : public virtual ydk::Identity
{
    public:
        MeterActionType();
        ~MeterActionType();


}; // MeterActionType

class AlwaysDrop : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        AlwaysDrop();
        ~AlwaysDrop();


}; // AlwaysDrop

class TailDrop : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        TailDrop();
        ~TailDrop();


}; // TailDrop

class MeterActionSet : public ietf_diffserv_action::MeterActionType, virtual ydk::Identity
{
    public:
        MeterActionSet();
        ~MeterActionSet();


}; // MeterActionSet

class MeterActionDrop : public ietf_diffserv_action::MeterActionType, virtual ydk::Identity
{
    public:
        MeterActionDrop();
        ~MeterActionDrop();


}; // MeterActionDrop

class RandomDetect : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        RandomDetect();
        ~RandomDetect();


}; // RandomDetect


}
}

#endif /* _IETF_DIFFSERV_ACTION_ */

