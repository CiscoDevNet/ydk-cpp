#ifndef _CISCO_NX_OS_DEVICE_43_
#define _CISCO_NX_OS_DEVICE_43_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_42.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv4Items : public ydk::Entity
{
    public:
        Icmpv4Items();
        ~Icmpv4Items();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::Icmpv4Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems> inst_items;
        
}; // System::Icmpv4Items


class System::Icmpv4Items::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::Icmpv4Items::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems> dom_items;
        
}; // System::Icmpv4Items::InstItems


class System::Icmpv4Items::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        class DomList; //type: System::Icmpv4Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Icmpv4Items::InstItems::DomItems


class System::Icmpv4Items::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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
        class IfItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems> if_items;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf ctrl; //type: string
        class RtvrfMbrItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv6Items : public ydk::Entity
{
    public:
        Icmpv6Items();
        ~Icmpv6Items();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::Icmpv6Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems> inst_items;
        
}; // System::Icmpv6Items


class System::Icmpv6Items::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf operst; //type: Icmpv6OperSt
        ydk::YLeaf adjstaletimer; //type: uint16
        ydk::YLeaf adjstaletimericmp; //type: NwAdminSt___
        ydk::YLeaf logginglevel; //type: Icmpv6LoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::Icmpv6Items::InstItems::IfItems
        class LogsItems; //type: System::Icmpv6Items::InstItems::LogsItems
        class IfstatsItems; //type: System::Icmpv6Items::InstItems::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::LogsItems> logs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfstatsItems> ifstats_items;
        
}; // System::Icmpv6Items::InstItems


class System::Icmpv6Items::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class IfList; //type: System::Icmpv6Items::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Icmpv6Items::InstItems::IfItems


class System::Icmpv6Items::InstItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf ctrl; //type: string
        class IfstatsItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Icmpv6Items::InstItems::IfItems::IfList


class System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totsent; //type: uint64
        ydk::YLeaf totrvcd; //type: uint64
        ydk::YLeaf errsent; //type: uint64
        ydk::YLeaf errrcvd; //type: uint64
        ydk::YLeaf ifdowndropsent; //type: uint64
        ydk::YLeaf ifdowndroprcvd; //type: uint64
        ydk::YLeaf drophanotrdy; //type: uint64
        ydk::YLeaf dropinvldttlmct; //type: uint64
        ydk::YLeaf dropsrcmacownrcvd; //type: uint64
        ydk::YLeaf droptgtipnotownrcvd; //type: uint64
        ydk::YLeaf dropsrcipnotownrcvd; //type: uint64
        ydk::YLeaf destunreachsent; //type: uint64
        ydk::YLeaf destunreachrcvd; //type: uint64
        ydk::YLeaf adminprohibsent; //type: uint64
        ydk::YLeaf adminprohibrcvd; //type: uint64
        ydk::YLeaf timeexcdsent; //type: uint64
        ydk::YLeaf timeexcdrcvd; //type: uint64
        ydk::YLeaf parmprblmsent; //type: uint64
        ydk::YLeaf parmprblmrcvd; //type: uint64
        ydk::YLeaf echoreqsent; //type: uint64
        ydk::YLeaf echoreqrcvd; //type: uint64
        ydk::YLeaf echorepsent; //type: uint64
        ydk::YLeaf echoreprcvd; //type: uint64
        ydk::YLeaf redirsent; //type: uint64
        ydk::YLeaf redirrcvd; //type: uint64
        ydk::YLeaf toobigsent; //type: uint64
        ydk::YLeaf toobigrcvd; //type: uint64
        ydk::YLeaf rasent; //type: uint64
        ydk::YLeaf rarcvd; //type: uint64
        ydk::YLeaf rssent; //type: uint64
        ydk::YLeaf rsrcvd; //type: uint64
        ydk::YLeaf nasent; //type: uint64
        ydk::YLeaf narcvd; //type: uint64
        ydk::YLeaf nssent; //type: uint64
        ydk::YLeaf nsrcvd; //type: uint64
        ydk::YLeaf duprareceived; //type: uint64
        ydk::YLeaf fastpthrcvd; //type: uint64
        ydk::YLeaf fastpathdsbleignrcvd; //type: uint64
        ydk::YLeaf fastpathotherignrcvd; //type: uint64
        ydk::YLeaf mldv1queriessent; //type: uint64
        ydk::YLeaf mldv1queriesrecv; //type: uint64
        ydk::YLeaf mldv2queriessent; //type: uint64
        ydk::YLeaf mldv2queriesrecv; //type: uint64
        ydk::YLeaf mldv1reportssent; //type: uint64
        ydk::YLeaf mldv1reportsrecv; //type: uint64
        ydk::YLeaf mldv2reportssent; //type: uint64
        ydk::YLeaf mldv2reportsrecv; //type: uint64
        ydk::YLeaf mldv1leavessent; //type: uint64
        ydk::YLeaf mldv1leavesrecv; //type: uint64

}; // System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv6Items::InstItems::LogsItems : public ydk::Entity
{
    public:
        LogsItems();
        ~LogsItems();

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

        class ICMPv6EventLogsList; //type: System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList

        ydk::YList icmpv6eventlogs_list;
        
}; // System::Icmpv6Items::InstItems::LogsItems


class System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList : public ydk::Entity
{
    public:
        ICMPv6EventLogsList();
        ~ICMPv6EventLogsList();

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

        ydk::YLeaf eventtype; //type: Icmpv6EventType
        ydk::YLeaf logsize; //type: Icmpv6EventLogSize

}; // System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList


class System::Icmpv6Items::InstItems::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

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

        ydk::YLeaf totsent; //type: uint64
        ydk::YLeaf totrvcd; //type: uint64
        ydk::YLeaf errsent; //type: uint64
        ydk::YLeaf errrcvd; //type: uint64
        ydk::YLeaf ifdowndropsent; //type: uint64
        ydk::YLeaf ifdowndroprcvd; //type: uint64
        ydk::YLeaf drophanotrdy; //type: uint64
        ydk::YLeaf dropinvldttlmct; //type: uint64
        ydk::YLeaf dropsrcmacownrcvd; //type: uint64
        ydk::YLeaf droptgtipnotownrcvd; //type: uint64
        ydk::YLeaf dropsrcipnotownrcvd; //type: uint64
        ydk::YLeaf destunreachsent; //type: uint64
        ydk::YLeaf destunreachrcvd; //type: uint64
        ydk::YLeaf adminprohibsent; //type: uint64
        ydk::YLeaf adminprohibrcvd; //type: uint64
        ydk::YLeaf timeexcdsent; //type: uint64
        ydk::YLeaf timeexcdrcvd; //type: uint64
        ydk::YLeaf parmprblmsent; //type: uint64
        ydk::YLeaf parmprblmrcvd; //type: uint64
        ydk::YLeaf echoreqsent; //type: uint64
        ydk::YLeaf echoreqrcvd; //type: uint64
        ydk::YLeaf echorepsent; //type: uint64
        ydk::YLeaf echoreprcvd; //type: uint64
        ydk::YLeaf redirsent; //type: uint64
        ydk::YLeaf redirrcvd; //type: uint64
        ydk::YLeaf toobigsent; //type: uint64
        ydk::YLeaf toobigrcvd; //type: uint64
        ydk::YLeaf rasent; //type: uint64
        ydk::YLeaf rarcvd; //type: uint64
        ydk::YLeaf rssent; //type: uint64
        ydk::YLeaf rsrcvd; //type: uint64
        ydk::YLeaf nasent; //type: uint64
        ydk::YLeaf narcvd; //type: uint64
        ydk::YLeaf nssent; //type: uint64
        ydk::YLeaf nsrcvd; //type: uint64
        ydk::YLeaf duprareceived; //type: uint64
        ydk::YLeaf fastpthrcvd; //type: uint64
        ydk::YLeaf fastpathdsbleignrcvd; //type: uint64
        ydk::YLeaf fastpathotherignrcvd; //type: uint64
        ydk::YLeaf mldv1queriessent; //type: uint64
        ydk::YLeaf mldv1queriesrecv; //type: uint64
        ydk::YLeaf mldv2queriessent; //type: uint64
        ydk::YLeaf mldv2queriesrecv; //type: uint64
        ydk::YLeaf mldv1reportssent; //type: uint64
        ydk::YLeaf mldv1reportsrecv; //type: uint64
        ydk::YLeaf mldv2reportssent; //type: uint64
        ydk::YLeaf mldv2reportsrecv; //type: uint64
        ydk::YLeaf mldv1leavessent; //type: uint64
        ydk::YLeaf mldv1leavesrecv; //type: uint64

}; // System::Icmpv6Items::InstItems::IfstatsItems


class System::IgmpsnoopItems : public ydk::Entity
{
    public:
        IgmpsnoopItems();
        ~IgmpsnoopItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::IgmpsnoopItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems> inst_items;
        
}; // System::IgmpsnoopItems


class System::IgmpsnoopItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf allrtrmcastencap; //type: string
        ydk::YLeaf flags; //type: string
        class DomItems; //type: System::IgmpsnoopItems::InstItems::DomItems
        class InststatsItems; //type: System::IgmpsnoopItems::InstItems::InststatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::InststatsItems> inststats_items;
        
}; // System::IgmpsnoopItems::InstItems


class System::IgmpsnoopItems::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        ydk::YLeaf opercfgrecovery; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf encap; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf fwdmode; //type: IpmcsnoopFwdMode
        ydk::YLeaf numrtrif; //type: uint32
        ydk::YLeaf nummcgrp; //type: uint32
        ydk::YLeaf numsrcgrp; //type: uint32
        ydk::YLeaf grpflushts; //type: one of uint64, string
        ydk::YLeaf nextqueryts; //type: one of uint64, string
        ydk::YLeaf nextqueryexpts; //type: one of uint64, string
        ydk::YLeaf mrtrepgid; //type: uint32
        class DbItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems
        class DomstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems
        class StrtrifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems
        class RtrifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::RtrifItems
        class VlanItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems
        class BdItems; //type: System::IgmpsnoopItems::InstItems::DomItems::BdItems
        class GlItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems> strtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::RtrifItems> rtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems> gl_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

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

        class DbList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

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

        ydk::YLeaf type; //type: IpmcsnoopDbT
        ydk::YLeaf name; //type: string
        ydk::YLeaf totalmaccount; //type: uint32
        class GsnoopItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems
        class VsnoopItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems
        class VlanrecItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems
        class ExpTrackItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems
        class VstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems
        class GstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems
        class PolicyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems
        class GroupItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems
        class McgrpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems
        class QuerierItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems> gsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems> vsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems> vlanrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems> exptrack_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems> vstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems> gstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems> mcgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems> querier_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems : public ydk::Entity
{
    public:
        GsnoopItems();
        ~GsnoopItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf snooping; //type: boolean
        ydk::YLeaf omf; //type: boolean
        ydk::YLeaf grepsup; //type: boolean
        ydk::YLeaf gv3repsup; //type: boolean
        ydk::YLeaf glinklocalgrpsup; //type: boolean
        ydk::YLeaf grouptimeout; //type: uint32
        ydk::YLeaf proxygeneralquery; //type: boolean
        ydk::YLeaf gmaxresponsetime; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems : public ydk::Entity
{
    public:
        VsnoopItems();
        ~VsnoopItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VSnoopRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList

        ydk::YList vsnooprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList : public ydk::Entity
{
    public:
        VSnoopRecList();
        ~VSnoopRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf lkpmode; //type: string
        ydk::YLeaf snoopon; //type: boolean
        ydk::YLeaf repsup; //type: boolean
        ydk::YLeaf v3repsup; //type: boolean
        ydk::YLeaf vlinklocalgrpsup; //type: boolean
        ydk::YLeaf omf_enabled; //type: boolean
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf routeportcnt; //type: uint32
        ydk::YLeaf groupcnt; //type: uint32
        ydk::YLeaf vpcfunction; //type: boolean
        ydk::YLeaf fastleave; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems : public ydk::Entity
{
    public:
        VlanrecItems();
        ~VlanrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList

        ydk::YList vlanrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList : public ydk::Entity
{
    public:
        VlanRecList();
        ~VlanRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf maccount; //type: uint32
        class MacItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems> mac_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList

        ydk::YList macrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList : public ydk::Entity
{
    public:
        MacRecList();
        ~MacRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddress; //type: string
        ydk::YLeaf type; //type: IpmcsnoopMacType
        ydk::YLeaf age; //type: uint32
        class OifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems> oif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacOifRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList

        ydk::YList macoifrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList : public ydk::Entity
{
    public:
        MacOifRecList();
        ~MacOifRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oif; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VlanrecItems::VlanRecList::MacItems::MacRecList::OifItems::MacOifRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems : public ydk::Entity
{
    public:
        MrouterItems();
        ~MrouterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MRouterRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList

        ydk::YList mrouterrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList : public ydk::Entity
{
    public:
        MRouterRecList();
        ~MRouterRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf type; //type: IpmcsnoopMrouteType
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf exptime; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems : public ydk::Entity
{
    public:
        ExpTrackItems();
        ~ExpTrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExpTrackRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList

        ydk::YList exptrackrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList : public ydk::Entity
{
    public:
        ExpTrackRecList();
        ~ExpTrackRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf reporter; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf lastjoin; //type: one of uint64, string
        ydk::YLeaf expires; //type: one of uint64, string
        ydk::YLeaf version; //type: string
        ydk::YLeaf numreports; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems : public ydk::Entity
{
    public:
        VstatsItems();
        ~VstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanStatsRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList

        ydk::YList vlanstatsrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList : public ydk::Entity
{
    public:
        VlanStatsRecList();
        ~VlanStatsRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf vpr; //type: uint32
        ydk::YLeaf v1rr; //type: uint32
        ydk::YLeaf v2rr; //type: uint32
        ydk::YLeaf v3rr; //type: uint32
        ydk::YLeaf v3qr; //type: uint32
        ydk::YLeaf v2lr; //type: uint32
        ydk::YLeaf phr; //type: uint32
        ydk::YLeaf irr; //type: uint32
        ydk::YLeaf iqr; //type: uint32
        ydk::YLeaf v2ls; //type: uint32
        ydk::YLeaf v3gs; //type: uint32
        ydk::YLeaf vmr; //type: uint32
        ydk::YLeaf upr; //type: uint32
        ydk::YLeaf qo; //type: uint32
        ydk::YLeaf v2ro; //type: uint32
        ydk::YLeaf v2lo; //type: uint32
        ydk::YLeaf v3ro; //type: uint32
        ydk::YLeaf vpsr; //type: uint32
        ydk::YLeaf str; //type: uint32
        ydk::YLeaf cps; //type: uint32
        ydk::YLeaf cpr; //type: uint32
        ydk::YLeaf cpe; //type: uint32
        ydk::YLeaf mps; //type: uint32
        ydk::YLeaf mpr; //type: uint32
        ydk::YLeaf mpe; //type: uint32
        ydk::YLeaf v1qr; //type: uint32
        ydk::YLeaf v2qr; //type: uint32
        ydk::YLeaf v1rs; //type: uint32
        ydk::YLeaf v2rs; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems : public ydk::Entity
{
    public:
        GstatsItems();
        ~GstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pr; //type: uint32
        ydk::YLeaf invpkt; //type: uint32
        ydk::YLeaf pnv; //type: uint32
        ydk::YLeaf loopbkpkt; //type: uint32
        ydk::YLeaf mrdloopbk; //type: uint32
        ydk::YLeaf pf; //type: uint32
        ydk::YLeaf vpcdrqs; //type: uint32
        ydk::YLeaf vpcdrqr; //type: uint32
        ydk::YLeaf vpcdrqf; //type: uint32
        ydk::YLeaf vpcdrus; //type: uint32
        ydk::YLeaf vpcdrur; //type: uint32
        ydk::YLeaf vpcdruf; //type: uint32
        ydk::YLeaf vpccfssf; //type: uint32
        ydk::YLeaf vpccfsrs; //type: uint32
        ydk::YLeaf vpccfsrr; //type: uint32
        ydk::YLeaf vpccfsrf; //type: uint32
        ydk::YLeaf vpccfsrfp; //type: uint32
        ydk::YLeaf vpccfsurls; //type: uint32
        ydk::YLeaf vpccfsurr; //type: uint32
        ydk::YLeaf vpccfscrlf; //type: uint32
        ydk::YLeaf vpccfsrls; //type: uint32
        ydk::YLeaf vpccfsrlr; //type: uint32
        ydk::YLeaf vpccfsrlf; //type: uint32
        ydk::YLeaf inviod; //type: uint32
        ydk::YLeaf stptcnr; //type: uint32
        ydk::YLeaf imapif; //type: uint32
        ydk::YLeaf mfreqr; //type: uint32
        ydk::YLeaf mfcmps; //type: uint32
        ydk::YLeaf mfdgcmps; //type: uint32
        ydk::YLeaf bufsnt; //type: uint32
        ydk::YLeaf bufackr; //type: uint32
        ydk::YLeaf vpcmismatch; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportPolicyStatsList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList

        ydk::YList reportpolicystats_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList : public ydk::Entity
{
    public:
        ReportPolicyStatsList();
        ~ReportPolicyStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf qcount; //type: uint32
        ydk::YLeaf rpmtype; //type: uint32
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf acceptcount; //type: uint32
        ydk::YLeaf rejectcount; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgmpsnGroupRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList

        ydk::YList igmpsngrouprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList : public ydk::Entity
{
    public:
        IgmpsnGroupRecList();
        ~IgmpsnGroupRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf groupaddr; //type: string
        ydk::YLeaf sourceaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf sporttype; //type: string
        ydk::YLeaf gporttype; //type: string
        ydk::YLeaf rporttype; //type: string
        ydk::YLeaf rifname; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems : public ydk::Entity
{
    public:
        McgrpItems();
        ~McgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McGrpRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList

        ydk::YList mcgrprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList : public ydk::Entity
{
    public:
        McGrpRecList();
        ~McGrpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf latreporter; //type: string
        ydk::YLeaf oldhostts; //type: one of uint64, string
        ydk::YLeaf reportts; //type: one of uint64, string
        ydk::YLeaf numsrc; //type: uint32
        class EpgItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems
        class RepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems> epg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems> rep_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems : public ydk::Entity
{
    public:
        EpgItems();
        ~EpgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpgRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList

        ydk::YList epgrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList : public ydk::Entity
{
    public:
        EpgRecList();
        ~EpgRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf mcastencap; //type: string
        class RepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems> rep_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems : public ydk::Entity
{
    public:
        RepItems();
        ~RepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList : public ydk::Entity
{
    public:
        ReportRecList();
        ~ReportRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastsrc; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        ydk::YLeaf filtmode; //type: McastFiltMode
        ydk::YLeaf flags; //type: string
        class OifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OIFRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
{
    public:
        OIFRecList();
        ~OIFRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf numgqmiss; //type: uint16
        ydk::YLeaf expirets; //type: one of uint64, string
        class HostItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
{
    public:
        HostRecList();
        ~HostRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf lastjoints; //type: one of uint64, string
        ydk::YLeaf nextexpiryts; //type: one of uint64, string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems : public ydk::Entity
{
    public:
        RepItems();
        ~RepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList : public ydk::Entity
{
    public:
        ReportRecList();
        ~ReportRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastsrc; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        ydk::YLeaf filtmode; //type: McastFiltMode
        ydk::YLeaf flags; //type: string
        class OifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OIFRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
{
    public:
        OIFRecList();
        ~OIFRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf numgqmiss; //type: uint16
        ydk::YLeaf expirets; //type: one of uint64, string
        class HostItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
{
    public:
        HostRecList();
        ~HostRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf lastjoints; //type: one of uint64, string
        ydk::YLeaf nextexpiryts; //type: one of uint64, string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems : public ydk::Entity
{
    public:
        QuerierItems();
        ~QuerierItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QuerierRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList

        ydk::YList querierrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList : public ydk::Entity
{
    public:
        QuerierRecList();
        ~QuerierRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf ver; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf port; //type: string
        ydk::YLeaf exptime; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList


class System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems : public ydk::Entity
{
    public:
        DomstatsItems();
        ~DomstatsItems();

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

        ydk::YLeaf v1reprcvd; //type: uint32
        ydk::YLeaf v2reprcvd; //type: uint32
        ydk::YLeaf v2leavercvd; //type: uint32
        ydk::YLeaf v1queryrcvd; //type: uint32
        ydk::YLeaf v2queryrcvd; //type: uint32
        ydk::YLeaf v1repsupr; //type: uint32
        ydk::YLeaf v2repsupr; //type: uint32
        ydk::YLeaf v2leavesupr; //type: uint32
        ydk::YLeaf v1reporig; //type: uint32
        ydk::YLeaf v2reporig; //type: uint32
        ydk::YLeaf v2leaveorig; //type: uint32
        ydk::YLeaf v3reprcvd; //type: uint32
        ydk::YLeaf v3queryrcvd; //type: uint32
        ydk::YLeaf v3grprecsupr; //type: uint32
        ydk::YLeaf v3reporig; //type: uint32
        ydk::YLeaf lastclearts; //type: one of uint64, string
        ydk::YLeaf pktsrcvd; //type: uint32
        ydk::YLeaf pimhellorcvd; //type: uint32
        ydk::YLeaf invqueryrcvd; //type: uint32
        ydk::YLeaf invreprcvd; //type: uint32
        ydk::YLeaf vermismatchrcvd; //type: uint32
        ydk::YLeaf unknpktrcvd; //type: uint32
        ydk::YLeaf querypktsorig; //type: uint32
        ydk::YLeaf pktstorport; //type: uint32
        ydk::YLeaf vpcsyncsent; //type: uint32
        ydk::YLeaf vpcsyncrcvd; //type: uint32
        ydk::YLeaf vpcsyncfail; //type: uint32
        ydk::YLeaf mrdsyncsent; //type: uint32
        ydk::YLeaf mrdsyncrcvd; //type: uint32
        ydk::YLeaf mrdsyncfail; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems : public ydk::Entity
{
    public:
        StrtrifItems();
        ~StrtrifItems();

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

        class StRtrIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList

        ydk::YList strtrif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList : public ydk::Entity
{
    public:
        StRtrIfList();
        ~StRtrIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf encap; //type: string
        class RtvrfMbrItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpsnoopItems::InstItems::DomItems::RtrifItems : public ydk::Entity
{
    public:
        RtrifItems();
        ~RtrifItems();

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

        class RtrIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList

        ydk::YList rtrif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::RtrifItems


class System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList : public ydk::Entity
{
    public:
        RtrIfList();
        ~RtrIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf nextexpiryts; //type: one of uint64, string

}; // System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

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

        class VlanList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList

        ydk::YList vlan_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

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

        ydk::YLeaf vlanid; //type: string
        class CktepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems
        class McgrpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems
        class IgmpsnbaseItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems
        class GTimersItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems
        class MactableItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems
        class ProxyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems
        class QuerierpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems
        class QuerierstItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems
        class ActrlItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems
        class RpolicyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems> cktep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems> mcgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems> igmpsnbase_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems> gtimers_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems> mactable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems> proxy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems> querierp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems> querierst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems> actrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems> rpolicy_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems : public ydk::Entity
{
    public:
        CktepItems();
        ~CktepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CktEpList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList : public ydk::Entity
{
    public:
        CktEpList();
        ~CktEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems : public ydk::Entity
{
    public:
        McgrpItems();
        ~McgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StMcGrpList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList

        ydk::YList stmcgrp_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList : public ydk::Entity
{
    public:
        StMcGrpList();
        ~StMcGrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        class SrcItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McSrcList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList

        ydk::YList mcsrc_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList : public ydk::Entity
{
    public:
        McSrcList();
        ~McSrcList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems : public ydk::Entity
{
    public:
        IgmpsnbaseItems();
        ~IgmpsnbaseItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lookupmac; //type: boolean
        ydk::YLeaf llgrpsuppr; //type: boolean
        ydk::YLeaf reportsuppr; //type: boolean
        ydk::YLeaf v3reportsuppr; //type: boolean
        ydk::YLeaf exptracking; //type: boolean
        ydk::YLeaf igmpsnoop; //type: boolean
        ydk::YLeaf minver; //type: uint16
        ydk::YLeaf maxgrp; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems : public ydk::Entity
{
    public:
        GTimersItems();
        ~GTimersItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastleave; //type: boolean
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf maxgqmiss; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems : public ydk::Entity
{
    public:
        MactableItems();
        ~MactableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacTableList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList

        ydk::YList mactable_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList : public ydk::Entity
{
    public:
        MacTableList();
        ~MacTableList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddress; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems
        class MifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems> mif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems : public ydk::Entity
{
    public:
        MifItems();
        ~MifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList

        ydk::YList mif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList : public ydk::Entity
{
    public:
        MIfList();
        ~MIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MactableItems::MacTableList::MifItems::MIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems : public ydk::Entity
{
    public:
        MrouterItems();
        ~MrouterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpcpeerlink; //type: boolean
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems
        class MifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems> mif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems : public ydk::Entity
{
    public:
        MifItems();
        ~MifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList

        ydk::YList mif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList : public ydk::Entity
{
    public:
        MIfList();
        ~MIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::MIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems : public ydk::Entity
{
    public:
        ProxyItems();
        ~ProxyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxresptime; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems : public ydk::Entity
{
    public:
        QuerierpItems();
        ~QuerierpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf timeout; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems : public ydk::Entity
{
    public:
        QuerierstItems();
        ~QuerierstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf if_; //type: string
        ydk::YLeaf flags; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems : public ydk::Entity
{
    public:
        ActrlItems();
        ~ActrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf direction; //type: RtctrlRtCtrlDir
        ydk::YLeaf rtmap; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems : public ydk::Entity
{
    public:
        RpolicyItems();
        ~RpolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPolicyList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList

        ydk::YList rpolicy_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList : public ydk::Entity
{
    public:
        RPolicyList();
        ~RPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::BdItems : public ydk::Entity
{
    public:
        BdItems();
        ~BdItems();

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

        class BDList; //type: System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList

        ydk::YList bd_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::BdItems


class System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList : public ydk::Entity
{
    public:
        BDList();
        ~BDList();

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

        ydk::YLeaf bdid; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems : public ydk::Entity
{
    public:
        GlItems();
        ~GlItems();

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

        class EventHistItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems
        class IgmpsnbaseItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems
        class MctrafItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems
        class GTimersItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems
        class GvlanItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems
        class GdebugItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems
        class ProxyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems> igmpsnbase_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems> mctraf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems> gtimers_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems> gvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems> gdebug_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems> proxy_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems : public ydk::Entity
{
    public:
        EventHistItems();
        ~EventHistItems();

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

        class EventHistoryList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

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

        ydk::YLeaf type; //type: IgmpsnoopEhType
        ydk::YLeaf size; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems : public ydk::Entity
{
    public:
        IgmpsnbaseItems();
        ~IgmpsnbaseItems();

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

        ydk::YLeaf lookupmac; //type: boolean
        ydk::YLeaf llgrpsuppr; //type: boolean
        ydk::YLeaf reportsuppr; //type: boolean
        ydk::YLeaf v3reportsuppr; //type: boolean
        ydk::YLeaf exptracking; //type: boolean
        ydk::YLeaf igmpsnoop; //type: boolean
        ydk::YLeaf minver; //type: uint16
        ydk::YLeaf maxgrp; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems : public ydk::Entity
{
    public:
        MctrafItems();
        ~MctrafItems();

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

        ydk::YLeaf holddowntimer; //type: uint16
        ydk::YLeaf optmcflood; //type: string
        ydk::YLeaf manytooneenh; //type: string
        ydk::YLeaf vpcpeerlinkexc; //type: boolean
        ydk::YLeaf ccmode; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems : public ydk::Entity
{
    public:
        GTimersItems();
        ~GTimersItems();

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

        ydk::YLeaf fastleave; //type: boolean
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf maxgqmiss; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems : public ydk::Entity
{
    public:
        GvlanItems();
        ~GvlanItems();

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

        ydk::YLeaf disablenvestrtrport; //type: boolean
        ydk::YLeaf vxlan; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems : public ydk::Entity
{
    public:
        GdebugItems();
        ~GdebugItems();

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

        ydk::YLeaf syslogthreshold; //type: uint16
        ydk::YLeaf selfmaccheck; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems : public ydk::Entity
{
    public:
        MrouterItems();
        ~MrouterItems();

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

        ydk::YLeaf vpcpeerlink; //type: boolean
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems
        class MifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems> mif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems : public ydk::Entity
{
    public:
        MifItems();
        ~MifItems();

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

        class MIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList

        ydk::YList mif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList : public ydk::Entity
{
    public:
        MIfList();
        ~MIfList();

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

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems : public ydk::Entity
{
    public:
        ProxyItems();
        ~ProxyItems();

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

        ydk::YLeaf maxresptime; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems


class System::IgmpsnoopItems::InstItems::InststatsItems : public ydk::Entity
{
    public:
        InststatsItems();
        ~InststatsItems();

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

        ydk::YLeaf totnummcgrp; //type: uint32
        ydk::YLeaf invpktsrcvd; //type: uint32
        ydk::YLeaf lpbkpktsrcvd; //type: uint32
        ydk::YLeaf pktsflooded; //type: uint32
        ydk::YLeaf mrdlpbkpktsrcvd; //type: uint32
        ydk::YLeaf novlandbpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssent; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssentfail; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvdfail; //type: uint32

}; // System::IgmpsnoopItems::InstItems::InststatsItems


class System::M6ribItems : public ydk::Entity
{
    public:
        M6ribItems();
        ~M6ribItems();

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

        class InstItems; //type: System::M6ribItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems> inst_items;
        
}; // System::M6ribItems


class System::M6ribItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        class DbItems; //type: System::M6ribItems::InstItems::DbItems
        class DomItems; //type: System::M6ribItems::InstItems::DomItems
        class RoutedbItems; //type: System::M6ribItems::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems> routedb_items;
        
}; // System::M6ribItems::InstItems


class System::M6ribItems::InstItems::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

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

        class DbList; //type: System::M6ribItems::InstItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::M6ribItems::InstItems::DbItems


class System::M6ribItems::InstItems::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

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

        ydk::YLeaf type; //type: M6ribDbT
        class ClientItems; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems
        class MemestItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems
        class VrfItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems> memest_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems : public ydk::Entity
{
    public:
        ClientItems();
        ~ClientItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClntEntityList; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList

        ydk::YList clntentity_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList : public ydk::Entity
{
    public:
        ClntEntityList();
        ~ClntEntityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf mtssapid; //type: uint32
        ydk::YLeaf shmemname; //type: string
        ydk::YLeaf notify; //type: boolean
        ydk::YLeaf staletimerrunning; //type: boolean
        ydk::YLeaf ssmowner; //type: boolean
        ydk::YLeaf bidirowner; //type: boolean
        ydk::YLeaf staticowner; //type: boolean
        ydk::YLeaf sharedonlyowner; //type: boolean
        ydk::YLeaf localjoinowner; //type: boolean
        ydk::YLeaf externalowner; //type: boolean
        ydk::YLeaf attachedowner; //type: boolean
        ydk::YLeaf fabricowner; //type: boolean
        class CnotifyItems; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems> cnotify_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems : public ydk::Entity
{
    public:
        CnotifyItems();
        ~CnotifyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientNotifyList; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList

        ydk::YList clientnotify_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList : public ydk::Entity
{
    public:
        ClientNotifyList();
        ~ClientNotifyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf notifyname; //type: string
        ydk::YLeaf sent; //type: uint64
        ydk::YLeaf fail; //type: uint64
        ydk::YLeaf rcvd; //type: uint64
        ydk::YLeaf ackrcvd; //type: uint64
        ydk::YLeaf acksent; //type: uint64
        ydk::YLeaf ackfail; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems : public ydk::Entity
{
    public:
        MemestItems();
        ~MemestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrmaxgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems
        class InusegrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems
        class ConfigmaxgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems
        class EstgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems> currmaxgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems> inusegrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems> configmaxgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems> estgrp_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems : public ydk::Entity
{
    public:
        CurrmaxgrpItems();
        ~CurrmaxgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList

        ydk::YList currmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList : public ydk::Entity
{
    public:
        CurrMaxMBList();
        ~CurrMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems : public ydk::Entity
{
    public:
        InusegrpItems();
        ~InusegrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InUseKBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList

        ydk::YList inusekb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList : public ydk::Entity
{
    public:
        InUseKBList();
        ~InUseKBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems : public ydk::Entity
{
    public:
        ConfigmaxgrpItems();
        ~ConfigmaxgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfiguredMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList

        ydk::YList configuredmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList : public ydk::Entity
{
    public:
        ConfiguredMaxMBList();
        ~ConfiguredMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems : public ydk::Entity
{
    public:
        EstgrpItems();
        ~EstgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EstMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList

        ydk::YList estmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList : public ydk::Entity
{
    public:
        EstMaxMBList();
        ~EstMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf totalnumroutes; //type: uint32
        ydk::YLeaf totalnumgroups; //type: uint32
        ydk::YLeaf stargroute; //type: uint32
        ydk::YLeaf sgroute; //type: uint32
        ydk::YLeaf stargprfx; //type: uint32
        class GroupItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf pending; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf statspkts; //type: uint32
        ydk::YLeaf statsbytes; //type: uint32
        ydk::YLeaf statsratebuf; //type: string
        ydk::YLeaf lispsrcrloc; //type: string
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf rpfnbruptime; //type: one of uint64, string
        ydk::YLeaf fabricoif; //type: boolean
        ydk::YLeaf fabricloser; //type: boolean
        ydk::YLeaf numvpcsvioifs; //type: uint32
        ydk::YLeaf routemdtiod; //type: boolean
        ydk::YLeaf mdtencapindex; //type: uint32
        class MpibItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems
        class OifItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems> mpib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems : public ydk::Entity
{
    public:
        MpibItems();
        ~MpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MpibList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList

        ydk::YList mpib_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList : public ydk::Entity
{
    public:
        MpibList();
        ~MpibList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpibname; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf staleroute; //type: boolean

}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList


}
}

#endif /* _CISCO_NX_OS_DEVICE_43_ */

