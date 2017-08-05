#ifndef _IETF_DIFFSERV_ACTION_
#define _IETF_DIFFSERV_ACTION_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_diffserv_policy.hpp"

namespace cisco_ios_xe {
namespace ietf_diffserv_action {

class DropType : public virtual ydk::Identity
{
    public:
        DropType();
        ~DropType();


}; // DropType

class AlgorithmicDrop : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        AlgorithmicDrop();
        ~AlgorithmicDrop();


}; // AlgorithmicDrop

class MeterActionType : public virtual ydk::Identity
{
    public:
        MeterActionType();
        ~MeterActionType();


}; // MeterActionType

class Priority : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Priority();
        ~Priority();


}; // Priority

class Marking : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Marking();
        ~Marking();


}; // Marking

class MinRate : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        MinRate();
        ~MinRate();


}; // MinRate

class MaxRate : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        MaxRate();
        ~MaxRate();


}; // MaxRate

class Meter : public ietf::ietf_diffserv_policy::ActionType, virtual ydk::Identity
{
    public:
        Meter();
        ~Meter();


}; // Meter

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

class AlwaysDrop : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        AlwaysDrop();
        ~AlwaysDrop();


}; // AlwaysDrop

class RandomDetect : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        RandomDetect();
        ~RandomDetect();


}; // RandomDetect

class TailDrop : public ietf_diffserv_action::DropType, virtual ydk::Identity
{
    public:
        TailDrop();
        ~TailDrop();


}; // TailDrop


}
}

#endif /* _IETF_DIFFSERV_ACTION_ */

