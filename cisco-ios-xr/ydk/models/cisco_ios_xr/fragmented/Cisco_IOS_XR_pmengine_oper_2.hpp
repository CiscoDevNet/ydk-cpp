#ifndef _CISCO_IOS_XR_PMENGINE_OPER_2_
#define _CISCO_IOS_XR_PMENGINE_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames : public ydk::Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet : public ydk::Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil


class PerformanceManagement::HoVc : public ydk::Entity
{
    public:
        HoVc();
        ~HoVc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HoVcPorts; //type: PerformanceManagement::HoVc::HoVcPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts> ho_vc_ports;
        
}; // PerformanceManagement::HoVc


class PerformanceManagement::HoVc::HoVcPorts : public ydk::Entity
{
    public:
        HoVcPorts();
        ~HoVcPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HoVcPort; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort> > ho_vc_port;
        
}; // PerformanceManagement::HoVc::HoVcPorts


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort : public ydk::Entity
{
    public:
        HoVcPort();
        ~HoVcPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class HoVcCurrent; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent> ho_vc_current;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent : public ydk::Entity
{
    public:
        HoVcCurrent();
        ~HoVcCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24
        class HoVcMinute15; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24> ho_vc_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15> ho_vc_minute15;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24 : public ydk::Entity
{
    public:
        HoVcHour24();
        ~HoVcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24Paths; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths> ho_vc_hour24_paths;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths : public ydk::Entity
{
    public:
        HoVcHour24Paths();
        ~HoVcHour24Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path> > ho_vc_hour24_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path : public ydk::Entity
{
    public:
        HoVcHour24Path();
        ~HoVcHour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path
        class FePath; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path> path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs
        class PathEsRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs
        class PathEBs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs
        class PathUaSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs> path_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs> path_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs> path_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs> path_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs : public ydk::Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs : public ydk::Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs : public ydk::Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs : public ydk::Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs : public ydk::Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15 : public ydk::Entity
{
    public:
        HoVcMinute15();
        ~HoVcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15Paths; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths> ho_vc_minute15_paths;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths : public ydk::Entity
{
    public:
        HoVcMinute15Paths();
        ~HoVcMinute15Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path> > ho_vc_minute15_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path : public ydk::Entity
{
    public:
        HoVcMinute15Path();
        ~HoVcMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path
        class FePath; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path> path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs
        class PathEsRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs
        class PathEBs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs
        class PathUaSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs> path_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs> path_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs> path_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs> path_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs : public ydk::Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs : public ydk::Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs : public ydk::Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs : public ydk::Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs : public ydk::Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs


class PerformanceManagement::Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacsecPorts; //type: PerformanceManagement::Macsec::MacsecPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts> macsec_ports;
        
}; // PerformanceManagement::Macsec


class PerformanceManagement::Macsec::MacsecPorts : public ydk::Entity
{
    public:
        MacsecPorts();
        ~MacsecPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacsecPort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort> > macsec_port;
        
}; // PerformanceManagement::Macsec::MacsecPorts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort : public ydk::Entity
{
    public:
        MacsecPort();
        ~MacsecPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class MacsecCurrent; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent> macsec_current;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent : public ydk::Entity
{
    public:
        MacsecCurrent();
        ~MacsecCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15
        class MacsecSecond30; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30
        class MacsecHour24; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24> macsec_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15> macsec_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30> macsec_second30;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24 : public ydk::Entity
{
    public:
        MacsecHour24();
        ~MacsecHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24EtherS; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS
        class MacsecHour24Secyifs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs
        class MacsecHour24Secyrxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes
        class MacsecHour24Secytxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS> macsec_hour24_ether_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs> macsec_hour24secyifs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes> macsec_hour24secyrxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes> macsec_hour24secytxes;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS : public ydk::Entity
{
    public:
        MacsecHour24EtherS();
        ~MacsecHour24EtherS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Ether; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether> > macsec_hour24_ether;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether : public ydk::Entity
{
    public:
        MacsecHour24Ether();
        ~MacsecHour24Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes
        class In8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil> tx_util;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021QFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets : public ydk::Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets : public ydk::Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets : public ydk::Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt : public ydk::Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat : public ydk::Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat : public ydk::Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames : public ydk::Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021QFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet : public ydk::Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs : public ydk::Entity
{
    public:
        MacsecHour24Secyifs();
        ~MacsecHour24Secyifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secyif; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif> > macsec_hour24secyif;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif : public ydk::Entity
{
    public:
        MacsecHour24Secyif();
        ~MacsecHour24Secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged> out_pkts_untagged;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_2_ */

