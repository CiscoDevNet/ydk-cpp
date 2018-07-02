#ifndef _CISCO_NX_OS_DEVICE_23_
#define _CISCO_NX_OS_DEVICE_23_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_22.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf evcnt; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf floodtopeercnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems : public ydk::Entity
{
    public:
        MultiareaItems();
        ~MultiareaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList

        ydk::YList multiarea_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList : public ydk::Entity
{
    public:
        MultiAreaList();
        ~MultiAreaList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multiareaid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf unknownsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems : public ydk::Entity
{
    public:
        RtospfIfDefToOspfIfItems();
        ~RtospfIfDefToOspfIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtOspfIfDefToOspfIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList

        ydk::YList rtospfifdeftoospfif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList : public ydk::Entity
{
    public:
        RtOspfIfDefToOspfIfList();
        ~RtOspfIfDefToOspfIfList();

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems : public ydk::Entity
{
    public:
        MaxlsapItems();
        ~MaxlsapItems();

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
        ydk::YLeaf maxlsa; //type: uint32
        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf sleepcnt; //type: uint32
        ydk::YLeaf sleepintvl; //type: uint16
        ydk::YLeaf resetintvl; //type: uint32
        ydk::YLeaf action; //type: OspfMaxLsaAct
        ydk::YLeaf operst; //type: OspfMaxLsaOperSt
        ydk::YLeaf operstqual; //type: OspfMaxLsaOperStQual
        ydk::YLeaf nonselflsacnt; //type: uint32
        ydk::YLeaf currsleepcnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems : public ydk::Entity
{
    public:
        MaxmetriclsapItems();
        ~MaxmetriclsapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf maxmetricextlsa; //type: uint32
        ydk::YLeaf maxmetricsummlsa; //type: uint32
        ydk::YLeaf startupintvl; //type: uint32
        ydk::YLeaf awaitconvbgpasn; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

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
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems : public ydk::Entity
{
    public:
        InterleakItems();
        ~InterleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterLeakPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList : public ydk::Entity
{
    public:
        InterLeakPList();
        ~InterLeakPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: RtleakProto
        ydk::YLeaf inst; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems : public ydk::Entity
{
    public:
        LeakctrlItems();
        ~LeakctrlItems();

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
        ydk::YLeaf ctrl; //type: RtleakCtrl
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf retries; //type: uint16
        ydk::YLeaf duration; //type: uint16

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems : public ydk::Entity
{
    public:
        RibleakItems();
        ~RibleakItems();

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
        ydk::YLeaf always; //type: boolean

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems : public ydk::Entity
{
    public:
        ExtrtsumItems();
        ~ExtrtsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList

        ydk::YList extrtsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList : public ydk::Entity
{
    public:
        ExtRtSumList();
        ~ExtRtSumList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf comprtcnt; //type: uint32
        ydk::YLeaf opercost; //type: uint32
        ydk::YLeaf tag; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf unknownsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems : public ydk::Entity
{
    public:
        EvtlogsItems();
        ~EvtlogsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventLogsList; //type: System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::OspfItems::InstItems::InstList::EvtlogsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList : public ydk::Entity
{
    public:
        EventLogsList();
        ~EventLogsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eventtype; //type: OspfEventType
        ydk::YLeaf logsize; //type: OspfEventLogSize
        ydk::YLeaf logsizekbytes; //type: uint16

}; // System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList


class System::OspfItems::IfItems : public ydk::Entity
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

        class InternalIfList; //type: System::OspfItems::IfItems::InternalIfList

        ydk::YList internalif_list;
        
}; // System::OspfItems::IfItems


class System::OspfItems::IfItems::InternalIfList : public ydk::Entity
{
    public:
        InternalIfList();
        ~InternalIfList();

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
        ydk::YLeaf instanceid; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf operst; //type: OspfIfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: OspfIfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        ydk::YLeaf operdeadintvl; //type: uint16
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf instance; //type: string
        ydk::YLeaf dom; //type: string
        ydk::YLeaf instancedeletedviacli; //type: string
        class AuthnewItems; //type: System::OspfItems::IfItems::InternalIfList::AuthnewItems
        class MultiareaItems; //type: System::OspfItems::IfItems::InternalIfList::MultiareaItems
        class RtvrfMbrItems; //type: System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::IfItems::InternalIfList::AuthnewItems> authnew_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::IfItems::InternalIfList::MultiareaItems> multiarea_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::OspfItems::IfItems::InternalIfList


class System::OspfItems::IfItems::InternalIfList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::IfItems::InternalIfList::AuthnewItems


class System::OspfItems::IfItems::InternalIfList::MultiareaItems : public ydk::Entity
{
    public:
        MultiareaItems();
        ~MultiareaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InternalMultiAreaList; //type: System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList

        ydk::YList internalmultiarea_list;
        
}; // System::OspfItems::IfItems::InternalIfList::MultiareaItems


class System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList : public ydk::Entity
{
    public:
        InternalMultiAreaList();
        ~InternalMultiAreaList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multiareaid; //type: string

}; // System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList


class System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems


class System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems


class System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::EvpnItems : public ydk::Entity
{
    public:
        EvpnItems();
        ~EvpnItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class BdeviItems; //type: System::EvpnItems::BdeviItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems> bdevi_items;
        
}; // System::EvpnItems


class System::EvpnItems::BdeviItems : public ydk::Entity
{
    public:
        BdeviItems();
        ~BdeviItems();

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

        class BDEviList; //type: System::EvpnItems::BdeviItems::BDEviList

        ydk::YList bdevi_list;
        
}; // System::EvpnItems::BdeviItems


class System::EvpnItems::BdeviItems::BDEviList : public ydk::Entity
{
    public:
        BDEviList();
        ~BDEviList();

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

        ydk::YLeaf encap; //type: string
        ydk::YLeaf cfgsrcctrlr; //type: BgpAdminSt
        ydk::YLeaf operrd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems> rttp_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems : public ydk::Entity
{
    public:
        RttpItems();
        ~RttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttPList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtctrlRttPType
        ydk::YLeaf cfgsrcctrlr; //type: BgpAdminSt
        ydk::YLeaf operrttauto; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class EntItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems
        class RtctrlmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems
        class RtctrldefmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems> rtctrlmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems> rtctrldefmap_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: string
        ydk::YLeaf cfgsrcctrlr; //type: BgpAdminSt

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems : public ydk::Entity
{
    public:
        RtctrlmapItems();
        ~RtctrlmapItems();

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
        ydk::YLeaf rtmap; //type: string

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems : public ydk::Entity
{
    public:
        RtctrldefmapItems();
        ~RtctrldefmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxlimit; //type: uint32
        ydk::YLeaf allowvpn; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rtmap; //type: string

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems


class System::UserextItems : public ydk::Entity
{
    public:
        UserextItems();
        ~UserextItems();

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

        ydk::YLeaf pwdstrengthcheck; //type: AaaBoolean
        ydk::YLeaf pwdsecuremode; //type: AaaBoolean
        ydk::YLeaf pwdminlength; //type: uint16
        ydk::YLeaf pwdmaxlength; //type: uint16
        ydk::YLeaf svcpwdrecovery; //type: AaaBoolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RadiusextItems; //type: System::UserextItems::RadiusextItems
        class LdapextItems; //type: System::UserextItems::LdapextItems
        class TacacsextItems; //type: System::UserextItems::TacacsextItems
        class AuthrealmItems; //type: System::UserextItems::AuthrealmItems
        class LogindomainItems; //type: System::UserextItems::LogindomainItems
        class PreloginbannerItems; //type: System::UserextItems::PreloginbannerItems
        class RemoteuserItems; //type: System::UserextItems::RemoteuserItems
        class UserItems; //type: System::UserextItems::UserItems
        class RoleItems; //type: System::UserextItems::RoleItems
        class FactoryroleItems; //type: System::UserextItems::FactoryroleItems
        class DomainItems; //type: System::UserextItems::DomainItems
        class PwdprofileItems; //type: System::UserextItems::PwdprofileItems
        class PkiextItems; //type: System::UserextItems::PkiextItems
        class RtfabricResUserEpItems; //type: System::UserextItems::RtfabricResUserEpItems
        class RtaaaUserEpItems; //type: System::UserextItems::RtaaaUserEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems> radiusext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems> ldapext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems> tacacsext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems> authrealm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems> logindomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PreloginbannerItems> preloginbanner_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems> remoteuser_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems> user_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems> role_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::FactoryroleItems> factoryrole_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::DomainItems> domain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PwdprofileItems> pwdprofile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems> pkiext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtfabricResUserEpItems> rtfabricresuserep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtaaaUserEpItems> rtaaauserep_items;
        
}; // System::UserextItems


class System::UserextItems::RadiusextItems : public ydk::Entity
{
    public:
        RadiusextItems();
        ~RadiusextItems();

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

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEnc
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class RadiusproviderItems; //type: System::UserextItems::RadiusextItems::RadiusproviderItems
        class RadiusprovidergroupItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems
        class RadiusservermonitorItems; //type: System::UserextItems::RadiusextItems::RadiusservermonitorItems
        class RtfabricResRadiusEpItems; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusproviderItems> radiusprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems> radiusprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusservermonitorItems> radiusservermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems> rtfabricresradiusep_items;
        
}; // System::UserextItems::RadiusextItems


class System::UserextItems::RadiusextItems::RadiusproviderItems : public ydk::Entity
{
    public:
        RadiusproviderItems();
        ~RadiusproviderItems();

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

        class RadiusProviderList; //type: System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList

        ydk::YList radiusprovider_list;
        
}; // System::UserextItems::RadiusextItems::RadiusproviderItems


class System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList : public ydk::Entity
{
    public:
        RadiusProviderList();
        ~RadiusProviderList();

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
        ydk::YLeaf usetype; //type: AaaRadSrvUseType
        ydk::YLeaf authport; //type: uint32
        ydk::YLeaf acctport; //type: uint32
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyset; //type: boolean
        ydk::YLeaf keyenc; //type: AaaKeyEncRadiusProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf operstate; //type: AaaProviderState
        ydk::YLeaf monitorserver; //type: AaaMonitorServerType
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems : public ydk::Entity
{
    public:
        RadiusprovidergroupItems();
        ~RadiusprovidergroupItems();

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

        class RadiusProviderGroupList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList

        ydk::YList radiusprovidergroup_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList : public ydk::Entity
{
    public:
        RadiusProviderGroupList();
        ~RadiusProviderGroupList();

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
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

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
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::RadiusextItems::RadiusservermonitorItems : public ydk::Entity
{
    public:
        RadiusservermonitorItems();
        ~RadiusservermonitorItems();

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

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf idletime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusservermonitorItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems : public ydk::Entity
{
    public:
        RtfabricResRadiusEpItems();
        ~RtfabricResRadiusEpItems();

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

        class RtFabricResRadiusEpList; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList

        ydk::YList rtfabricresradiusep_list;
        
}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList : public ydk::Entity
{
    public:
        RtFabricResRadiusEpList();
        ~RtFabricResRadiusEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList


class System::UserextItems::LdapextItems : public ydk::Entity
{
    public:
        LdapextItems();
        ~LdapextItems();

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

        ydk::YLeaf attribute; //type: string
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf filter; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class LdapprovidergroupItems; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems
        class LdapproviderItems; //type: System::UserextItems::LdapextItems::LdapproviderItems
        class RtfabricResLdapEpItems; //type: System::UserextItems::LdapextItems::RtfabricResLdapEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapprovidergroupItems> ldapprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapproviderItems> ldapprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::RtfabricResLdapEpItems> rtfabricresldapep_items;
        
}; // System::UserextItems::LdapextItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems : public ydk::Entity
{
    public:
        LdapprovidergroupItems();
        ~LdapprovidergroupItems();

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

        class LdapProviderGroupList; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList

        ydk::YList ldapprovidergroup_list;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList : public ydk::Entity
{
    public:
        LdapProviderGroupList();
        ~LdapProviderGroupList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

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
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::LdapextItems::LdapproviderItems : public ydk::Entity
{
    public:
        LdapproviderItems();
        ~LdapproviderItems();

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

        class LdapProviderList; //type: System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList

        ydk::YList ldapprovider_list;
        
}; // System::UserextItems::LdapextItems::LdapproviderItems


class System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList : public ydk::Entity
{
    public:
        LdapProviderList();
        ~LdapProviderList();

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
        ydk::YLeaf rootdn; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf enablessl; //type: boolean
        ydk::YLeaf sslvalidationlevel; //type: AaaLdapSSLStrictnessLevel
        ydk::YLeaf attribute; //type: string
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf filter; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyset; //type: boolean
        ydk::YLeaf keyenc; //type: AaaKeyEncLdapProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf operstate; //type: AaaProviderState
        ydk::YLeaf monitorserver; //type: AaaMonitorServerType
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList


class System::UserextItems::LdapextItems::RtfabricResLdapEpItems : public ydk::Entity
{
    public:
        RtfabricResLdapEpItems();
        ~RtfabricResLdapEpItems();

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

        class RtFabricResLdapEpList; //type: System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList

        ydk::YList rtfabricresldapep_list;
        
}; // System::UserextItems::LdapextItems::RtfabricResLdapEpItems


class System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList : public ydk::Entity
{
    public:
        RtFabricResLdapEpList();
        ~RtFabricResLdapEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList


class System::UserextItems::TacacsextItems : public ydk::Entity
{
    public:
        TacacsextItems();
        ~TacacsextItems();

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

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEnc
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class TacacsplusproviderItems; //type: System::UserextItems::TacacsextItems::TacacsplusproviderItems
        class TacacsplusprovidergroupItems; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems
        class TacacsservermonitorItems; //type: System::UserextItems::TacacsextItems::TacacsservermonitorItems
        class RtfabricResTacacsPlusEpItems; //type: System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusproviderItems> tacacsplusprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems> tacacsplusprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsservermonitorItems> tacacsservermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems> rtfabricrestacacsplusep_items;
        
}; // System::UserextItems::TacacsextItems


class System::UserextItems::TacacsextItems::TacacsplusproviderItems : public ydk::Entity
{
    public:
        TacacsplusproviderItems();
        ~TacacsplusproviderItems();

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

        class TacacsPlusProviderList; //type: System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList

        ydk::YList tacacsplusprovider_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusproviderItems


class System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList : public ydk::Entity
{
    public:
        TacacsPlusProviderList();
        ~TacacsPlusProviderList();

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
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyset; //type: boolean
        ydk::YLeaf keyenc; //type: AaaKeyEncTacacsPlusProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf operstate; //type: AaaProviderState
        ydk::YLeaf monitorserver; //type: AaaMonitorServerType
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems : public ydk::Entity
{
    public:
        TacacsplusprovidergroupItems();
        ~TacacsplusprovidergroupItems();

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

        class TacacsPlusProviderGroupList; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList

        ydk::YList tacacsplusprovidergroup_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList : public ydk::Entity
{
    public:
        TacacsPlusProviderGroupList();
        ~TacacsPlusProviderGroupList();

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
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

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
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::TacacsextItems::TacacsservermonitorItems : public ydk::Entity
{
    public:
        TacacsservermonitorItems();
        ~TacacsservermonitorItems();

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

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf idletime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::TacacsextItems::TacacsservermonitorItems


class System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems : public ydk::Entity
{
    public:
        RtfabricResTacacsPlusEpItems();
        ~RtfabricResTacacsPlusEpItems();

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

        class RtFabricResTacacsPlusEpList; //type: System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList

        ydk::YList rtfabricrestacacsplusep_list;
        
}; // System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems


class System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList : public ydk::Entity
{
    public:
        RtFabricResTacacsPlusEpList();
        ~RtFabricResTacacsPlusEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList


class System::UserextItems::AuthrealmItems : public ydk::Entity
{
    public:
        AuthrealmItems();
        ~AuthrealmItems();

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

        ydk::YLeaf defrolepolicy; //type: AaaNoRolePolicy
        ydk::YLeaf raddirectedreq; //type: AaaBoolean
        ydk::YLeaf tacdirectedreq; //type: AaaBoolean
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class AaagroupItems; //type: System::UserextItems::AuthrealmItems::AaagroupItems
        class DefaultauthItems; //type: System::UserextItems::AuthrealmItems::DefaultauthItems
        class DefaultauthorItems; //type: System::UserextItems::AuthrealmItems::DefaultauthorItems
        class ConsoleauthorItems; //type: System::UserextItems::AuthrealmItems::ConsoleauthorItems
        class DefaultaccItems; //type: System::UserextItems::AuthrealmItems::DefaultaccItems
        class PkisshcertItems; //type: System::UserextItems::AuthrealmItems::PkisshcertItems
        class PkisshpubkeyItems; //type: System::UserextItems::AuthrealmItems::PkisshpubkeyItems
        class ConsoleauthItems; //type: System::UserextItems::AuthrealmItems::ConsoleauthItems
        class RtfabricResAuthRealmItems; //type: System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::AaagroupItems> aaagroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultauthItems> defaultauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultauthorItems> defaultauthor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::ConsoleauthorItems> consoleauthor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultaccItems> defaultacc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::PkisshcertItems> pkisshcert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::PkisshpubkeyItems> pkisshpubkey_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::ConsoleauthItems> consoleauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems> rtfabricresauthrealm_items;
        
}; // System::UserextItems::AuthrealmItems


class System::UserextItems::AuthrealmItems::AaagroupItems : public ydk::Entity
{
    public:
        AaagroupItems();
        ~AaagroupItems();

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

        class AaaServerGroupList; //type: System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList

        ydk::YList aaaservergroup_list;
        
}; // System::UserextItems::AuthrealmItems::AaagroupItems


class System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList : public ydk::Entity
{
    public:
        AaaServerGroupList();
        ~AaaServerGroupList();

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
        ydk::YLeaf protocol; //type: AaaProviderGroupProtocol

}; // System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList


class System::UserextItems::AuthrealmItems::DefaultauthItems : public ydk::Entity
{
    public:
        DefaultauthItems();
        ~DefaultauthItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::AuthrealmItems::DefaultauthItems


class System::UserextItems::AuthrealmItems::DefaultauthorItems : public ydk::Entity
{
    public:
        DefaultauthorItems();
        ~DefaultauthorItems();

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

        class DefaultAuthorList; //type: System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList

        ydk::YList defaultauthor_list;
        
}; // System::UserextItems::AuthrealmItems::DefaultauthorItems


class System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList : public ydk::Entity
{
    public:
        DefaultAuthorList();
        ~DefaultAuthorList();

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

        ydk::YLeaf cmdtype; //type: AaaCmdType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf authormethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList


class System::UserextItems::AuthrealmItems::ConsoleauthorItems : public ydk::Entity
{
    public:
        ConsoleauthorItems();
        ~ConsoleauthorItems();

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

        class ConsoleAuthorList; //type: System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList

        ydk::YList consoleauthor_list;
        
}; // System::UserextItems::AuthrealmItems::ConsoleauthorItems


class System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList : public ydk::Entity
{
    public:
        ConsoleAuthorList();
        ~ConsoleAuthorList();

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

        ydk::YLeaf cmdtype; //type: AaaCmdType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf authormethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList


class System::UserextItems::AuthrealmItems::DefaultaccItems : public ydk::Entity
{
    public:
        DefaultaccItems();
        ~DefaultaccItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf accmethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::DefaultaccItems


class System::UserextItems::AuthrealmItems::PkisshcertItems : public ydk::Entity
{
    public:
        PkisshcertItems();
        ~PkisshcertItems();

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

        ydk::YLeaf local; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string

}; // System::UserextItems::AuthrealmItems::PkisshcertItems


class System::UserextItems::AuthrealmItems::PkisshpubkeyItems : public ydk::Entity
{
    public:
        PkisshpubkeyItems();
        ~PkisshpubkeyItems();

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

        ydk::YLeaf local; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string

}; // System::UserextItems::AuthrealmItems::PkisshpubkeyItems


class System::UserextItems::AuthrealmItems::ConsoleauthItems : public ydk::Entity
{
    public:
        ConsoleauthItems();
        ~ConsoleauthItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::AuthrealmItems::ConsoleauthItems


class System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems : public ydk::Entity
{
    public:
        RtfabricResAuthRealmItems();
        ~RtfabricResAuthRealmItems();

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

        class RtFabricResAuthRealmList; //type: System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList

        ydk::YList rtfabricresauthrealm_list;
        
}; // System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems


class System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList : public ydk::Entity
{
    public:
        RtFabricResAuthRealmList();
        ~RtFabricResAuthRealmList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList


class System::UserextItems::LogindomainItems : public ydk::Entity
{
    public:
        LogindomainItems();
        ~LogindomainItems();

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

        class LoginDomainList; //type: System::UserextItems::LogindomainItems::LoginDomainList

        ydk::YList logindomain_list;
        
}; // System::UserextItems::LogindomainItems


class System::UserextItems::LogindomainItems::LoginDomainList : public ydk::Entity
{
    public:
        LoginDomainList();
        ~LoginDomainList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class DomainauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems
        class RtaaaLoginDomainItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems> domainauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems> rtaaalogindomain_items;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems : public ydk::Entity
{
    public:
        DomainauthItems();
        ~DomainauthItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealmDomainAuthRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean
        class DefaultauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems
        class ConsoleauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems> defaultauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems> consoleauth_items;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems : public ydk::Entity
{
    public:
        DefaultauthItems();
        ~DefaultauthItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems : public ydk::Entity
{
    public:
        ConsoleauthItems();
        ~ConsoleauthItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems : public ydk::Entity
{
    public:
        RtaaaLoginDomainItems();
        ~RtaaaLoginDomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAaaLoginDomainList; //type: System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList

        ydk::YList rtaaalogindomain_list;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems


class System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList : public ydk::Entity
{
    public:
        RtAaaLoginDomainList();
        ~RtAaaLoginDomainList();

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList


class System::UserextItems::PreloginbannerItems : public ydk::Entity
{
    public:
        PreloginbannerItems();
        ~PreloginbannerItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf message; //type: string
        ydk::YLeaf guimessage; //type: string
        ydk::YLeaf delimiter; //type: string
        class RtpreLoginBannerItems; //type: System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems> rtpreloginbanner_items;
        
}; // System::UserextItems::PreloginbannerItems


class System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems : public ydk::Entity
{
    public:
        RtpreLoginBannerItems();
        ~RtpreLoginBannerItems();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems


class System::UserextItems::RemoteuserItems : public ydk::Entity
{
    public:
        RemoteuserItems();
        ~RemoteuserItems();

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

        class RemoteUserList; //type: System::UserextItems::RemoteuserItems::RemoteUserList

        ydk::YList remoteuser_list;
        
}; // System::UserextItems::RemoteuserItems


class System::UserextItems::RemoteuserItems::RemoteUserList : public ydk::Entity
{
    public:
        RemoteUserList();
        ~RemoteUserList();

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
        ydk::YLeaf logintime; //type: string
        ydk::YLeaf unixuserid; //type: uint16
        ydk::YLeaf ciscoavpair; //type: string
        ydk::YLeaf logindomain; //type: string
        ydk::YLeaf deleteflag; //type: AaaBoolean
        ydk::YLeaf sequencenumber; //type: uint64
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class UserdomainItems; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems> userdomain_items;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems : public ydk::Entity
{
    public:
        UserdomainItems();
        ~UserdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteUserDomainList; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList

        ydk::YList remoteuserdomain_list;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList : public ydk::Entity
{
    public:
        RemoteUserDomainList();
        ~RemoteUserDomainList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RoleItems; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems> role_items;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteUserRoleList; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList

        ydk::YList remoteuserrole_list;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList : public ydk::Entity
{
    public:
        RemoteUserRoleList();
        ~RemoteUserRoleList();

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
        ydk::YLeaf privtype; //type: AaaUserRolePrivType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList


class System::UserextItems::UserItems : public ydk::Entity
{
    public:
        UserItems();
        ~UserItems();

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

        class UserList; //type: System::UserextItems::UserItems::UserList

        ydk::YList user_list;
        
}; // System::UserextItems::UserItems


class System::UserextItems::UserItems::UserList : public ydk::Entity
{
    public:
        UserList();
        ~UserList();

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
        ydk::YLeaf firstname; //type: string
        ydk::YLeaf lastname; //type: string
        ydk::YLeaf email; //type: string
        ydk::YLeaf phone; //type: string
        ydk::YLeaf expiration; //type: string
        ydk::YLeaf expires; //type: AaaBoolean
        ydk::YLeaf allowexpired; //type: AaaBoolean
        ydk::YLeaf accountstatus; //type: AaaAccountStatus
        ydk::YLeaf pwd; //type: string
        ydk::YLeaf encpwd; //type: string
        ydk::YLeaf pwdlen; //type: uint32
        ydk::YLeaf pwdset; //type: boolean
        ydk::YLeaf pwdencrypttype; //type: AaaKeyEncUserPass
        ydk::YLeaf oldpwdencrypttype; //type: AaaKeyEncUserPass
        ydk::YLeaf issnmpnotify; //type: AaaBoolean
        ydk::YLeaf pwdlifetime; //type: uint16
        ydk::YLeaf clearpwdhistory; //type: AaaClear
        ydk::YLeaf unixuserid; //type: uint16
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class SshauthItems; //type: System::UserextItems::UserItems::UserList::SshauthItems
        class UsercertItems; //type: System::UserextItems::UserItems::UserList::UsercertItems
        class UserdomainItems; //type: System::UserextItems::UserItems::UserList::UserdomainItems
        class UserdataItems; //type: System::UserextItems::UserItems::UserList::UserdataItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::SshauthItems> sshauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UsercertItems> usercert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdomainItems> userdomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdataItems> userdata_items;
        
}; // System::UserextItems::UserItems::UserList


class System::UserextItems::UserItems::UserList::SshauthItems : public ydk::Entity
{
    public:
        SshauthItems();
        ~SshauthItems();

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
        ydk::YLeaf fingerprint; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::SshauthItems


class System::UserextItems::UserItems::UserList::UsercertItems : public ydk::Entity
{
    public:
        UsercertItems();
        ~UsercertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserCertList; //type: System::UserextItems::UserItems::UserList::UsercertItems::UserCertList

        ydk::YList usercert_list;
        
}; // System::UserextItems::UserItems::UserList::UsercertItems


class System::UserextItems::UserItems::UserList::UsercertItems::UserCertList : public ydk::Entity
{
    public:
        UserCertList();
        ~UserCertList();

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
        ydk::YLeaf data; //type: string
        ydk::YLeaf fingerprint; //type: string
        ydk::YLeaf certificatedecodeinformation; //type: string
        ydk::YLeaf publickey; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UsercertItems::UserCertList


class System::UserextItems::UserItems::UserList::UserdomainItems : public ydk::Entity
{
    public:
        UserdomainItems();
        ~UserdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserDomainList; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList

        ydk::YList userdomain_list;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList : public ydk::Entity
{
    public:
        UserDomainList();
        ~UserDomainList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RoleItems; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems> role_items;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserRoleList; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList

        ydk::YList userrole_list;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList : public ydk::Entity
{
    public:
        UserRoleList();
        ~UserRoleList();

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
        ydk::YLeaf privtype; //type: AaaUserRolePrivType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList


class System::UserextItems::UserItems::UserList::UserdataItems : public ydk::Entity
{
    public:
        UserdataItems();
        ~UserdataItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwdchangeddate; //type: string
        ydk::YLeaf pwdhistory; //type: string
        ydk::YLeaf pwdchangecount; //type: uint8
        ydk::YLeaf pwdchangeintervalbegin; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UserdataItems


class System::UserextItems::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

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

        class RoleList; //type: System::UserextItems::RoleItems::RoleList

        ydk::YList role_list;
        
}; // System::UserextItems::RoleItems


class System::UserextItems::RoleItems::RoleList : public ydk::Entity
{
    public:
        RoleList();
        ~RoleList();

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
        ydk::YLeaf denyvrf; //type: AaaBoolean
        ydk::YLeaf allowedvrf; //type: string
        ydk::YLeaf denyvlan; //type: AaaBoolean
        ydk::YLeaf allowedvlan; //type: string
        ydk::YLeaf denyintf; //type: AaaBoolean
        ydk::YLeaf priv; //type: string
        ydk::YLeaf roleprivtype; //type: AaaUserRolePrivType
        ydk::YLeaf roleisbuiltin; //type: AaaBoolean
        ydk::YLeaf resettofactory; //type: AaaBoolean
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RuleItems; //type: System::UserextItems::RoleItems::RoleList::RuleItems
        class IntfItems; //type: System::UserextItems::RoleItems::RoleList::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems::RoleList::RuleItems> rule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems::RoleList::IntfItems> intf_items;
        
}; // System::UserextItems::RoleItems::RoleList


class System::UserextItems::RoleItems::RoleList::RuleItems : public ydk::Entity
{
    public:
        RuleItems();
        ~RuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoleRuleList; //type: System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList

        ydk::YList rolerule_list;
        
}; // System::UserextItems::RoleItems::RoleList::RuleItems


class System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList : public ydk::Entity
{
    public:
        RoleRuleList();
        ~RoleRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rulenumber; //type: uint32
        ydk::YLeaf permission; //type: AaaRulePermissionType
        ydk::YLeaf ruleaccess; //type: AaaRuleAccessType
        ydk::YLeaf rulescope; //type: AaaRuleScopeType
        ydk::YLeaf cmdstr; //type: string
        ydk::YLeaf scopeentity; //type: string

}; // System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList


class System::UserextItems::RoleItems::RoleList::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoleIntfList; //type: System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList

        ydk::YList roleintf_list;
        
}; // System::UserextItems::RoleItems::RoleList::IntfItems


class System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList : public ydk::Entity
{
    public:
        RoleIntfList();
        ~RoleIntfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intfname; //type: string
        ydk::YLeaf allowinst; //type: string

}; // System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList


class System::UserextItems::FactoryroleItems : public ydk::Entity
{
    public:
        FactoryroleItems();
        ~FactoryroleItems();

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

        class FactoryRoleList; //type: System::UserextItems::FactoryroleItems::FactoryRoleList

        ydk::YList factoryrole_list;
        
}; // System::UserextItems::FactoryroleItems


class System::UserextItems::FactoryroleItems::FactoryRoleList : public ydk::Entity
{
    public:
        FactoryRoleList();
        ~FactoryRoleList();

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
        ydk::YLeaf priv; //type: string
        ydk::YLeaf resettofactory; //type: AaaBoolean
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::FactoryroleItems::FactoryRoleList


class System::UserextItems::DomainItems : public ydk::Entity
{
    public:
        DomainItems();
        ~DomainItems();

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

        class DomainList; //type: System::UserextItems::DomainItems::DomainList

        ydk::YList domain_list;
        
}; // System::UserextItems::DomainItems


class System::UserextItems::DomainItems::DomainList : public ydk::Entity
{
    public:
        DomainList();
        ~DomainList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::DomainItems::DomainList


class System::UserextItems::PwdprofileItems : public ydk::Entity
{
    public:
        PwdprofileItems();
        ~PwdprofileItems();

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

        ydk::YLeaf expirationwarntime; //type: uint8
        ydk::YLeaf historycount; //type: uint8
        ydk::YLeaf nochangeinterval; //type: uint16
        ydk::YLeaf changeinterval; //type: uint16
        ydk::YLeaf changeduringinterval; //type: AaaPwdPolicy
        ydk::YLeaf changecount; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PwdprofileItems


class System::UserextItems::PkiextItems : public ydk::Entity
{
    public:
        PkiextItems();
        ~PkiextItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class WebtokendataItems; //type: System::UserextItems::PkiextItems::WebtokendataItems
        class CsyncsharedkeyItems; //type: System::UserextItems::PkiextItems::CsyncsharedkeyItems
        class CsyncpolicyItems; //type: System::UserextItems::PkiextItems::CsyncpolicyItems
        class DbgplgchItems; //type: System::UserextItems::PkiextItems::DbgplgchItems
        class KeyringItems; //type: System::UserextItems::PkiextItems::KeyringItems
        class TpItems; //type: System::UserextItems::PkiextItems::TpItems
        class RtfabricResPkiEpItems; //type: System::UserextItems::PkiextItems::RtfabricResPkiEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::WebtokendataItems> webtokendata_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncsharedkeyItems> csyncsharedkey_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncpolicyItems> csyncpolicy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::DbgplgchItems> dbgplgch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems> keyring_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::TpItems> tp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::RtfabricResPkiEpItems> rtfabricrespkiep_items;
        
}; // System::UserextItems::PkiextItems


class System::UserextItems::PkiextItems::WebtokendataItems : public ydk::Entity
{
    public:
        WebtokendataItems();
        ~WebtokendataItems();

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

        ydk::YLeaf key; //type: string
        ydk::YLeaf initializationvector; //type: string
        ydk::YLeaf hashsecret; //type: string
        ydk::YLeaf webtokentimeoutseconds; //type: uint16
        ydk::YLeaf maximumvalidityperiod; //type: uint16
        ydk::YLeaf uiidletimeoutseconds; //type: uint16
        ydk::YLeaf sessionrecordflags; //type: string
        ydk::YLeaf sitefingerprint; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::WebtokendataItems


class System::UserextItems::PkiextItems::CsyncsharedkeyItems : public ydk::Entity
{
    public:
        CsyncsharedkeyItems();
        ~CsyncsharedkeyItems();

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

        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::CsyncsharedkeyItems


class System::UserextItems::PkiextItems::CsyncpolicyItems : public ydk::Entity
{
    public:
        CsyncpolicyItems();
        ~CsyncpolicyItems();

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

        ydk::YLeaf state; //type: PkiCsyncActivationStateType
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CsyncelemItems; //type: System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems> csyncelem_items;
        
}; // System::UserextItems::PkiextItems::CsyncpolicyItems


class System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems : public ydk::Entity
{
    public:
        CsyncelemItems();
        ~CsyncelemItems();

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

        class CsyncElementList; //type: System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList

        ydk::YList csyncelement_list;
        
}; // System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems


class System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList : public ydk::Entity
{
    public:
        CsyncElementList();
        ~CsyncElementList();

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
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf type; //type: PkiCsyncElementType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList


class System::UserextItems::PkiextItems::DbgplgchItems : public ydk::Entity
{
    public:
        DbgplgchItems();
        ~DbgplgchItems();

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

        ydk::YLeaf challenge; //type: string
        ydk::YLeaf oldchallenge; //type: string
        ydk::YLeaf timegenerated; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::DbgplgchItems


class System::UserextItems::PkiextItems::KeyringItems : public ydk::Entity
{
    public:
        KeyringItems();
        ~KeyringItems();

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

        class KeyRingList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList

        ydk::YList keyring_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList : public ydk::Entity
{
    public:
        KeyRingList();
        ~KeyRingList();

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
        ydk::YLeaf adminstate; //type: PkiKeyringState
        ydk::YLeaf regen; //type: boolean
        ydk::YLeaf key; //type: string
        ydk::YLeaf modulus; //type: PkiModulus
        ydk::YLeaf cert; //type: string
        ydk::YLeaf certvaliduntil; //type: string
        ydk::YLeaf certificatedecodeinformation; //type: string
        ydk::YLeaf tp; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CertreqItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems
        class RtcommKeyRingItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems
        class RtaaaKeyringRefItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems> certreq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems> rtcommkeyring_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems> rtaaakeyringref_items;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems : public ydk::Entity
{
    public:
        CertreqItems();
        ~CertreqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf subjname; //type: string
        ydk::YLeaf email; //type: string
        ydk::YLeaf country; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf locality; //type: string
        ydk::YLeaf orgunitname; //type: string
        ydk::YLeaf orgname; //type: string
        ydk::YLeaf req; //type: string

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems : public ydk::Entity
{
    public:
        RtcommKeyRingItems();
        ~RtcommKeyRingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtCommKeyRingList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList

        ydk::YList rtcommkeyring_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList : public ydk::Entity
{
    public:
        RtCommKeyRingList();
        ~RtCommKeyRingList();

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems : public ydk::Entity
{
    public:
        RtaaaKeyringRefItems();
        ~RtaaaKeyringRefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAaaKeyringRefList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList

        ydk::YList rtaaakeyringref_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList : public ydk::Entity
{
    public:
        RtAaaKeyringRefList();
        ~RtAaaKeyringRefList();

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList


class System::UserextItems::PkiextItems::TpItems : public ydk::Entity
{
    public:
        TpItems();
        ~TpItems();

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

        class TPList; //type: System::UserextItems::PkiextItems::TpItems::TPList

        ydk::YList tp_list;
        
}; // System::UserextItems::PkiextItems::TpItems


class System::UserextItems::PkiextItems::TpItems::TPList : public ydk::Entity
{
    public:
        TPList();
        ~TPList();

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
        ydk::YLeaf certchain; //type: string
        ydk::YLeaf fp; //type: string
        ydk::YLeaf numcerts; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::TpItems::TPList


class System::UserextItems::PkiextItems::RtfabricResPkiEpItems : public ydk::Entity
{
    public:
        RtfabricResPkiEpItems();
        ~RtfabricResPkiEpItems();

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

        class RtFabricResPkiEpList; //type: System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList

        ydk::YList rtfabricrespkiep_list;
        
}; // System::UserextItems::PkiextItems::RtfabricResPkiEpItems


class System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList : public ydk::Entity
{
    public:
        RtFabricResPkiEpList();
        ~RtFabricResPkiEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList


class System::UserextItems::RtfabricResUserEpItems : public ydk::Entity
{
    public:
        RtfabricResUserEpItems();
        ~RtfabricResUserEpItems();

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

        class RtFabricResUserEpList; //type: System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList

        ydk::YList rtfabricresuserep_list;
        
}; // System::UserextItems::RtfabricResUserEpItems


class System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList : public ydk::Entity
{
    public:
        RtFabricResUserEpList();
        ~RtFabricResUserEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList


class System::UserextItems::RtaaaUserEpItems : public ydk::Entity
{
    public:
        RtaaaUserEpItems();
        ~RtaaaUserEpItems();

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

        class RtAaaUserEpList; //type: System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList

        ydk::YList rtaaauserep_list;
        
}; // System::UserextItems::RtaaaUserEpItems


class System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList : public ydk::Entity
{
    public:
        RtAaaUserEpList();
        ~RtAaaUserEpList();

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

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList


class System::MockrootItems : public ydk::Entity
{
    public:
        MockrootItems();
        ~MockrootItems();

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

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class SessionItems; //type: System::MockrootItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems> session_items;
        
}; // System::MockrootItems


class System::MockrootItems::SessionItems : public ydk::Entity
{
    public:
        SessionItems();
        ~SessionItems();

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

        class MockSessionList; //type: System::MockrootItems::SessionItems::MockSessionList

        ydk::YList mocksession_list;
        
}; // System::MockrootItems::SessionItems


class System::MockrootItems::SessionItems::MockSessionList : public ydk::Entity
{
    public:
        MockSessionList();
        ~MockSessionList();

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
        ydk::YLeaf observable; //type: string
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf mode; //type: MockMode
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class StatItems; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems::MockSessionList::StatItems> stat_items;
        
}; // System::MockrootItems::SessionItems::MockSessionList


class System::MockrootItems::SessionItems::MockSessionList::StatItems : public ydk::Entity
{
    public:
        StatItems();
        ~StatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList

        ydk::YList stats_list;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf namespace_; //type: string
        ydk::YLeaf statname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CounterItems; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems> counter_items;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems : public ydk::Entity
{
    public:
        CounterItems();
        ~CounterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CounterList; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList

        ydk::YList counter_list;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_23_ */

