#ifndef _CISCO_IOS_XE_NATIVE_195_
#define _CISCO_IOS_XE_NATIVE_195_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_175.hpp"
#include "Cisco_IOS_XE_native_193.hpp"
#include "Cisco_IOS_XE_native_194.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator : public ydk::Entity
{
    public:
        SourceLocator();
        ~SourceLocator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm : public ydk::Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports : public ydk::Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_transmit; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::EidTable::InstanceList::LocatorDown : public ydk::Entity
{
    public:
        LocatorDown();
        ~LocatorDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv4_interface; //type: string
        ydk::YLeaf ipv6_interface; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorDown


class Native::Router::Lisp::EidTable::InstanceList::LocatorTable : public ydk::Entity
{
    public:
        LocatorTable();
        ~LocatorTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorTable


class Native::Router::Lisp::EidTable::InstanceList::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr_rlocs; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::MapRequest


class Native::Router::Lisp::EidTable::InstanceList::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration
        class Nmr; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr
        class Session; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc> rloc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr> nmr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Session> session;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Members; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered : public ydk::Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf locator_set; //type: string
        class Operator_;

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr : public ydk::Entity
{
    public:
        Nmr();
        ~Nmr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_site_ttl; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf passive_open; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Session


class Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe : public ydk::Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe


class Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe : public ydk::Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_membership_change; //type: empty
        ydk::YLeaf on_route_change; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe


class Native::Router::Lisp::EidTable::InstanceList::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf map_request; //type: empty
        ydk::YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapCache


class Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp


class Native::Router::Lisp::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

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

        ydk::YLeaf strong; //type: empty

}; // Native::Router::Lisp::Security


class Native::Router::Lisp::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

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

        ydk::YLeaf sname; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class Default; //type: Native::Router::Lisp::Site::Default
        class AuthenticationKey; //type: Native::Router::Lisp::Site::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site


class Native::Router::Lisp::Site::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::Lisp::Site::Default::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::Default::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::Default::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::Default::EidRecord

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default::AllowedLocator> allowed_locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default::EidPrefix> eid_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site::Default


class Native::Router::Lisp::Site::Default::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::Default::AuthenticationKey


class Native::Router::Lisp::Site::Default::AllowedLocator : public ydk::Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ls_ipv4; //type: string
        ydk::YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::Default::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::Default::AllowedLocator


class Native::Router::Lisp::Site::Default::AllowedLocator::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::Default::AllowedLocator::List


class Native::Router::Lisp::Site::Default::EidPrefix : public ydk::Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default::EidPrefix::InstanceId

        ydk::YList prefixes;
        ydk::YList instance_id;
        
}; // Native::Router::Lisp::Site::Default::EidPrefix


class Native::Router::Lisp::Site::Default::EidPrefix::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default::EidPrefix::Prefixes


class Native::Router::Lisp::Site::Default::EidPrefix::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes

        ydk::YList prefixes;
        
}; // Native::Router::Lisp::Site::Default::EidPrefix::InstanceId


class Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::Default::EidRecord : public ydk::Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default::EidRecord::InstanceId

        ydk::YList prefixes;
        ydk::YList instance_id;
        
}; // Native::Router::Lisp::Site::Default::EidRecord


class Native::Router::Lisp::Site::Default::EidRecord::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default::EidRecord::Prefixes


class Native::Router::Lisp::Site::Default::EidRecord::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes

        ydk::YList prefixes;
        
}; // Native::Router::Lisp::Site::Default::EidRecord::InstanceId


class Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Site::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::AuthenticationKey


class Native::Router::Lisp::Site::AllowedLocator : public ydk::Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ls_ipv4; //type: string
        ydk::YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::AllowedLocator::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::AllowedLocator


class Native::Router::Lisp::Site::AllowedLocator::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::AllowedLocator::List


class Native::Router::Lisp::Site::EidPrefix : public ydk::Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId

        ydk::YList prefixes;
        ydk::YList instance_id;
        
}; // Native::Router::Lisp::Site::EidPrefix


class Native::Router::Lisp::Site::EidPrefix::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::Prefixes


class Native::Router::Lisp::Site::EidPrefix::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes

        ydk::YList prefixes;
        
}; // Native::Router::Lisp::Site::EidPrefix::InstanceId


class Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::EidRecord : public ydk::Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidRecord::InstanceId

        ydk::YList prefixes;
        ydk::YList instance_id;
        
}; // Native::Router::Lisp::Site::EidRecord


class Native::Router::Lisp::Site::EidRecord::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::Prefixes


class Native::Router::Lisp::Site::EidRecord::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes

        ydk::YList prefixes;
        
}; // Native::Router::Lisp::Site::EidRecord::InstanceId


class Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf accept_more_specifics; //type: empty
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

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

        ydk::YLeaf verbose; //type: empty
        class Session; //type: Native::Router::Lisp::Syslog::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Syslog::Session> session;
        
}; // Native::Router::Lisp::Syslog


class Native::Router::Lisp::Syslog::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf changes; //type: empty

}; // Native::Router::Lisp::Syslog::Session


class Native::Router::LispList : public ydk::Entity
{
    public:
        LispList();
        ~LispList();

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

        ydk::YLeaf lisp; //type: uint16
        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Default; //type: Native::Router::LispList::Default
        class Service; //type: Native::Router::LispList::Service
        class Encapsulation; //type: Native::Router::LispList::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::LocatorSet
        class Locator; //type: Native::Router::LispList::Locator
        class LocatorScope; //type: Native::Router::LispList::LocatorScope
        class PrefixList; //type: Native::Router::LispList::PrefixList
        class InstanceContainer; //type: Native::Router::LispList::InstanceContainer
        class Alt; //type: Native::Router::LispList::Alt
        class ControlPacket; //type: Native::Router::LispList::ControlPacket
        class Ddt; //type: Native::Router::LispList::Ddt
        class Decapsulation; //type: Native::Router::LispList::Decapsulation
        class Etr; //type: Native::Router::LispList::Etr
        class Ipv4; //type: Native::Router::LispList::Ipv4
        class Ipv6; //type: Native::Router::LispList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::LocatorTable
        class MapRequest; //type: Native::Router::LispList::MapRequest
        class MapServer; //type: Native::Router::LispList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::EidTable
        class Security; //type: Native::Router::LispList::Security
        class Site; //type: Native::Router::LispList::Site
        class Syslog; //type: Native::Router::LispList::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Service> service; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Encapsulation> encapsulation;
        ydk::YList locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Locator> locator;
        ydk::YList locator_scope;
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorDown> locator_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Security> security; // presence node
        ydk::YList site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Syslog> syslog;
        
}; // Native::Router::LispList


class Native::Router::LispList::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::LispList::Default::Service
        class Encapsulation; //type: Native::Router::LispList::Default::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::Default::LocatorSet
        class Locator; //type: Native::Router::LispList::Default::Locator
        class LocatorScope; //type: Native::Router::LispList::Default::LocatorScope
        class PrefixList; //type: Native::Router::LispList::Default::PrefixList
        class InstanceContainer; //type: Native::Router::LispList::Default::InstanceContainer
        class Alt; //type: Native::Router::LispList::Default::Alt
        class ControlPacket; //type: Native::Router::LispList::Default::ControlPacket
        class Ddt; //type: Native::Router::LispList::Default::Ddt
        class Decapsulation; //type: Native::Router::LispList::Default::Decapsulation
        class Etr; //type: Native::Router::LispList::Default::Etr
        class Ipv4; //type: Native::Router::LispList::Default::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::Default::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::Default::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::Default::LocatorTable
        class MapRequest; //type: Native::Router::LispList::Default::MapRequest
        class MapServer; //type: Native::Router::LispList::Default::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::Default::EidTable
        class Security; //type: Native::Router::LispList::Default::Security
        class Site; //type: Native::Router::LispList::Default::Site
        class Syslog; //type: Native::Router::LispList::Default::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service> service; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Encapsulation> encapsulation;
        ydk::YList locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Locator> locator;
        ydk::YList locator_scope;
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::LocatorDown> locator_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Security> security; // presence node
        ydk::YList site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Syslog> syslog;
        
}; // Native::Router::LispList::Default


class Native::Router::LispList::Default::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::LispList::Default::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::Default::Service::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6> ipv6; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ethernet> ethernet; // presence node
        
}; // Native::Router::LispList::Default::Service


class Native::Router::LispList::Default::Service::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default_; //type: Native::Router::LispList::Default::Service::Ipv4::Default_
        class DatabaseMapping; //type: Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Default::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::Default::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::Default::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default::Service::Ipv4::UsePetr
        class Import; //type: Native::Router::LispList::Default::Service::Ipv4::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::RouteExport> route_export;
        ydk::YList use_petr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Import> import;
                class Encapsulation;

}; // Native::Router::LispList::Default::Service::Ipv4


class Native::Router::LispList::Default::Service::Ipv4::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Itr
        class ItrEnable; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable
        class Etr; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Distance
        class MapCache; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr
        class Import; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest> solicit_map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport> route_export;
        ydk::YList use_petr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Import> import;
                class Encapsulation;

}; // Native::Router::LispList::Default::Service::Ipv4::Default_


class Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping


class Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit


class Native::Router::LispList::Default::Service::Ipv4::Default_::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nmr_ttl; //type: uint16
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver

        ydk::YList map_resolver;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Itr


class Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver


class Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable


class Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping

        ydk::YList map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7> key_7;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration


class Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest


class Native::Router::LispList::Default::Service::Ipv4::Default_::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Distance


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids


class Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent


class Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr


class Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport


class Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr


class Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority


class Native::Router::LispList::Default::Service::Ipv4::Default_::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database> database;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Import


class Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database


class Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping


class Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::LispList::Default::Service::Ipv4::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nmr_ttl; //type: uint16
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver

        ydk::YList map_resolver;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Itr


class Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver


class Native::Router::LispList::Default::Service::Ipv4::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::ItrEnable


class Native::Router::LispList::Default::Service::Ipv4::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::EtrEnable


class Native::Router::LispList::Default::Service::Ipv4::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping

        ydk::YList map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Etr


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit


class Native::Router::LispList::Default::Service::Ipv4::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default::Service::Ipv4::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapServer


class Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister


class Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate


class Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default::Service::Ipv4::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::SiteRegistration


class Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest


class Native::Router::LispList::Default::Service::Ipv4::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::Distance


class Native::Router::LispList::Default::Service::Ipv4::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default::Service::Ipv4::MapCache


class Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids


class Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent


class Native::Router::LispList::Default::Service::Ipv4::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::ProxyItr


class Native::Router::LispList::Default::Service::Ipv4::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv4::RouteExport


class Native::Router::LispList::Default::Service::Ipv4::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default::Service::Ipv4::UsePetr


class Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority


class Native::Router::LispList::Default::Service::Ipv4::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::LispList::Default::Service::Ipv4::Import::Database

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv4::Import::Database> database;
        
}; // Native::Router::LispList::Default::Service::Ipv4::Import


class Native::Router::LispList::Default::Service::Ipv4::Import::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::Default::Service::Ipv4::Import::Database


class Native::Router::LispList::Default::Service::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default_; //type: Native::Router::LispList::Default::Service::Ipv6::Default_
        class DatabaseMapping; //type: Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::LispList::Default::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::LispList::Default::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv6::MapResolver
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv6::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::LispList::Default::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default::Service::Ipv6::UsePetr
        class Import; //type: Native::Router::LispList::Default::Service::Ipv6::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::RouteExport> route_export;
        ydk::YList use_petr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Import> import;
                class Encapsulation;

}; // Native::Router::LispList::Default::Service::Ipv6


class Native::Router::LispList::Default::Service::Ipv6::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Itr
        class ItrEnable; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::EtrEnable
        class Etr; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Distance
        class MapCache; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::UsePetr
        class Import; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::SolicitMapRequest> solicit_map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::RouteExport> route_export;
        ydk::YList use_petr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Import> import;
                class Encapsulation;

}; // Native::Router::LispList::Default::Service::Ipv6::Default_


class Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping


class Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::DatabaseMapping::Limit


class Native::Router::LispList::Default::Service::Ipv6::Default_::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nmr_ttl; //type: uint16
        class MapResolver; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Itr::MapResolver

        ydk::YList map_resolver;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Itr


class Native::Router::LispList::Default::Service::Ipv6::Default_::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Itr::MapResolver


class Native::Router::LispList::Default::Service::Ipv6::Default_::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::ItrEnable


class Native::Router::LispList::Default::Service::Ipv6::Default_::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::EtrEnable


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping

        ydk::YList map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key7> key_7;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        ydk::YLeaf prefix_list; //type: string
        class HashFunction;

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default::Service::Ipv6::Default_::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default::Service::Ipv6::Default_::MapCacheLimit


class Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver


class Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest


class Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default::Service::Ipv6::Default_::MapResolver::MapRequest::Validate

class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf override;

        static int get_enum_value(const std::string & name) {
            if (name == "add") return 0;
            if (name == "override") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "lisp") return 0;
            if (name == "vxlan") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Default_::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "lisp") return 0;
            if (name == "vxlan") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "lisp") return 0;
            if (name == "vxlan") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Default_::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "lisp") return 0;
            if (name == "vxlan") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};

class Native::Router::LispList::Default::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

        static int get_enum_value(const std::string & name) {
            if (name == "sha1") return 0;
            if (name == "sha2") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_195_ */

