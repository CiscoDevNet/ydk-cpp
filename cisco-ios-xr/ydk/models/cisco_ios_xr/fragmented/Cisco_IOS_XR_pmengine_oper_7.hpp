#ifndef _CISCO_IOS_XR_PMENGINE_OPER_7_
#define _CISCO_IOS_XR_PMENGINE_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_5.hpp"
#include "Cisco_IOS_XR_pmengine_oper_6.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat : public Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat : public Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets : public Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet : public Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet : public Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet : public Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet : public Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet : public Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt : public Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt : public Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt : public Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt : public Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt : public Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt : public Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt : public Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors : public Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets : public Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt : public Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt : public Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt : public Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets : public Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame : public Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes : public Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames : public Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets : public Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts : public Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun : public Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort : public Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan : public Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac : public Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap : public Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther : public Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant : public Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber : public Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc : public Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions : public Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol : public Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes : public Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames : public Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames : public Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets : public Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts : public Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun : public Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort : public Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther : public Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther : public Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant : public Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt : public Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers : public Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments : public Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther : public Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet : public Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets : public Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets : public Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets : public Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets : public Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets : public Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet : public Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets : public Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets : public Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets : public Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets : public Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets : public Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil : public Entity
{
    public:
        RxUtil();
        ~RxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil : public Entity
{
    public:
        TxUtil();
        ~TxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt : public Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt : public Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments : public Entity
{
    public:
        TxFragments();
        ~TxFragments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber : public Entity
{
    public:
        TxJabber();
        ~TxJabber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs : public Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs


class PerformanceManagementHistory::Global::Periodic::DwdmHistory : public Entity
{
    public:
        DwdmHistory();
        ~DwdmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmPortHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories> dwdm_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories : public Entity
{
    public:
        DwdmPortHistories();
        ~DwdmPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmPortHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory> > dwdm_port_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory : public Entity
{
    public:
        DwdmPortHistory();
        ~DwdmPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class DwdmMinute15History; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History
        class DwdmHour24History; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History> dwdm_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History> dwdm_minute15_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History : public Entity
{
    public:
        DwdmMinute15History();
        ~DwdmMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories
        class DwdmMinute15FecHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories
        class DwdmMinute15OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories> dwdm_minute15_optics_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories> dwdm_minute15fec_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories> dwdm_minute15otn_histories;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories : public Entity
{
    public:
        DwdmMinute15OtnHistories();
        ~DwdmMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory> > dwdm_minute15otn_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory : public Entity
{
    public:
        DwdmMinute15OtnHistory();
        ~DwdmMinute15OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances> dwdm_minute15otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances : public Entity
{
    public:
        DwdmMinute15OtnTimeLineInstances();
        ~DwdmMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance> > dwdm_minute15otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance : public Entity
{
    public:
        DwdmMinute15OtnTimeLineInstance();
        ~DwdmMinute15OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories : public Entity
{
    public:
        DwdmMinute15FecHistories();
        ~DwdmMinute15FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15FecHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory> > dwdm_minute15fec_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory : public Entity
{
    public:
        DwdmMinute15FecHistory();
        ~DwdmMinute15FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmMinute15FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances> dwdm_minute15fec_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances : public Entity
{
    public:
        DwdmMinute15FecTimeLineInstances();
        ~DwdmMinute15FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance> > dwdm_minute15fec_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance : public Entity
{
    public:
        DwdmMinute15FecTimeLineInstance();
        ~DwdmMinute15FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords> uc_words;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories : public Entity
{
    public:
        DwdmMinute15OpticsHistories();
        ~DwdmMinute15OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory> > dwdm_minute15_optics_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory : public Entity
{
    public:
        DwdmMinute15OpticsHistory();
        ~DwdmMinute15OpticsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmMinute15OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances> dwdm_minute15_optics_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances : public Entity
{
    public:
        DwdmMinute15OpticsTimeLineInstances();
        ~DwdmMinute15OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmMinute15OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance> > dwdm_minute15_optics_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance : public Entity
{
    public:
        DwdmMinute15OpticsTimeLineInstance();
        ~DwdmMinute15OpticsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow> rx_sig_pow;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc : public Entity
{
    public:
        LbcPc();
        ~LbcPc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt : public Entity
{
    public:
        Opt();
        ~Opt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr : public Entity
{
    public:
        Opr();
        ~Opr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd : public Entity
{
    public:
        Cd();
        ~Cd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd : public Entity
{
    public:
        Dgd();
        ~Dgd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd : public Entity
{
    public:
        Pmd();
        ~Pmd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr : public Entity
{
    public:
        Osnr();
        ~Osnr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength : public Entity
{
    public:
        CenterWavelength();
        ~CenterWavelength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl : public Entity
{
    public:
        Pdl();
        ~Pdl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr : public Entity
{
    public:
        Pcr();
        ~Pcr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn : public Entity
{
    public:
        Pn();
        ~Pn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow : public Entity
{
    public:
        RxSigPow();
        ~RxSigPow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff : public Entity
{
    public:
        LowSigFreqOff();
        ~LowSigFreqOff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History : public Entity
{
    public:
        DwdmHour24History();
        ~DwdmHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories
        class DwdmHour24FecHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories
        class DwdmHour24OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories> dwdm_hour24_optics_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories> dwdm_hour24fec_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories> dwdm_hour24otn_histories;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories : public Entity
{
    public:
        DwdmHour24OtnHistories();
        ~DwdmHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory> > dwdm_hour24otn_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory : public Entity
{
    public:
        DwdmHour24OtnHistory();
        ~DwdmHour24OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances> dwdm_hour24otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances : public Entity
{
    public:
        DwdmHour24OtnTimeLineInstances();
        ~DwdmHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance> > dwdm_hour24otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance : public Entity
{
    public:
        DwdmHour24OtnTimeLineInstance();
        ~DwdmHour24OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories : public Entity
{
    public:
        DwdmHour24FecHistories();
        ~DwdmHour24FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24FecHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory> > dwdm_hour24fec_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory : public Entity
{
    public:
        DwdmHour24FecHistory();
        ~DwdmHour24FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmHour24FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances> dwdm_hour24fec_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances : public Entity
{
    public:
        DwdmHour24FecTimeLineInstances();
        ~DwdmHour24FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance> > dwdm_hour24fec_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance : public Entity
{
    public:
        DwdmHour24FecTimeLineInstance();
        ~DwdmHour24FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords> uc_words;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_7_ */

