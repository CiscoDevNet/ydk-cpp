#ifndef _RMON_MIB_
#define _RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace RMON_MIB {

class Rmoneventsv2 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Rmoneventsv2();
        ~Rmoneventsv2();


}; // Rmoneventsv2

class RMONMIB : public ydk::Entity
{
    public:
        RMONMIB();
        ~RMONMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Etherstatstable; //type: RMONMIB::Etherstatstable
        class Historycontroltable; //type: RMONMIB::Historycontroltable
        class Etherhistorytable; //type: RMONMIB::Etherhistorytable
        class Alarmtable; //type: RMONMIB::Alarmtable
        class Hostcontroltable; //type: RMONMIB::Hostcontroltable
        class Hosttable; //type: RMONMIB::Hosttable
        class Hosttimetable; //type: RMONMIB::Hosttimetable
        class Hosttopncontroltable; //type: RMONMIB::Hosttopncontroltable
        class Hosttopntable; //type: RMONMIB::Hosttopntable
        class Matrixcontroltable; //type: RMONMIB::Matrixcontroltable
        class Matrixsdtable; //type: RMONMIB::Matrixsdtable
        class Matrixdstable; //type: RMONMIB::Matrixdstable
        class Filtertable; //type: RMONMIB::Filtertable
        class Channeltable; //type: RMONMIB::Channeltable
        class Buffercontroltable; //type: RMONMIB::Buffercontroltable
        class Capturebuffertable; //type: RMONMIB::Capturebuffertable
        class Eventtable; //type: RMONMIB::Eventtable
        class Logtable; //type: RMONMIB::Logtable

        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Etherstatstable> etherstatstable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Historycontroltable> historycontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Etherhistorytable> etherhistorytable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Alarmtable> alarmtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hostcontroltable> hostcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttable> hosttable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttimetable> hosttimetable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttopncontroltable> hosttopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttopntable> hosttopntable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixcontroltable> matrixcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixsdtable> matrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixdstable> matrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Filtertable> filtertable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Channeltable> channeltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Buffercontroltable> buffercontroltable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Capturebuffertable> capturebuffertable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Eventtable> eventtable;
        std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Logtable> logtable;
        
}; // RMONMIB


class RMONMIB::Etherstatstable : public ydk::Entity
{
    public:
        Etherstatstable();
        ~Etherstatstable();

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

        class Etherstatsentry; //type: RMONMIB::Etherstatstable::Etherstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Etherstatstable::Etherstatsentry> > etherstatsentry;
        
}; // RMONMIB::Etherstatstable


class RMONMIB::Etherstatstable::Etherstatsentry : public ydk::Entity
{
    public:
        Etherstatsentry();
        ~Etherstatsentry();

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

        ydk::YLeaf etherstatsindex; //type: int32
        ydk::YLeaf etherstatsdatasource; //type: string
        ydk::YLeaf etherstatsdropevents; //type: uint32
        ydk::YLeaf etherstatsoctets; //type: uint32
        ydk::YLeaf etherstatspkts; //type: uint32
        ydk::YLeaf etherstatsbroadcastpkts; //type: uint32
        ydk::YLeaf etherstatsmulticastpkts; //type: uint32
        ydk::YLeaf etherstatscrcalignerrors; //type: uint32
        ydk::YLeaf etherstatsundersizepkts; //type: uint32
        ydk::YLeaf etherstatsoversizepkts; //type: uint32
        ydk::YLeaf etherstatsfragments; //type: uint32
        ydk::YLeaf etherstatsjabbers; //type: uint32
        ydk::YLeaf etherstatscollisions; //type: uint32
        ydk::YLeaf etherstatspkts64octets; //type: uint32
        ydk::YLeaf etherstatspkts65to127octets; //type: uint32
        ydk::YLeaf etherstatspkts128to255octets; //type: uint32
        ydk::YLeaf etherstatspkts256to511octets; //type: uint32
        ydk::YLeaf etherstatspkts512to1023octets; //type: uint32
        ydk::YLeaf etherstatspkts1024to1518octets; //type: uint32
        ydk::YLeaf etherstatsowner; //type: binary
        ydk::YLeaf etherstatsstatus; //type: EntryStatus
        ydk::YLeaf etherstatsdroppedframes; //type: uint32
        ydk::YLeaf etherstatscreatetime; //type: uint32

}; // RMONMIB::Etherstatstable::Etherstatsentry


class RMONMIB::Historycontroltable : public ydk::Entity
{
    public:
        Historycontroltable();
        ~Historycontroltable();

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

        class Historycontrolentry; //type: RMONMIB::Historycontroltable::Historycontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Historycontroltable::Historycontrolentry> > historycontrolentry;
        
}; // RMONMIB::Historycontroltable


class RMONMIB::Historycontroltable::Historycontrolentry : public ydk::Entity
{
    public:
        Historycontrolentry();
        ~Historycontrolentry();

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

        ydk::YLeaf historycontrolindex; //type: int32
        ydk::YLeaf historycontroldatasource; //type: string
        ydk::YLeaf historycontrolbucketsrequested; //type: int32
        ydk::YLeaf historycontrolbucketsgranted; //type: int32
        ydk::YLeaf historycontrolinterval; //type: int32
        ydk::YLeaf historycontrolowner; //type: binary
        ydk::YLeaf historycontrolstatus; //type: EntryStatus
        ydk::YLeaf historycontroldroppedframes; //type: uint32

}; // RMONMIB::Historycontroltable::Historycontrolentry


class RMONMIB::Etherhistorytable : public ydk::Entity
{
    public:
        Etherhistorytable();
        ~Etherhistorytable();

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

        class Etherhistoryentry; //type: RMONMIB::Etherhistorytable::Etherhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Etherhistorytable::Etherhistoryentry> > etherhistoryentry;
        
}; // RMONMIB::Etherhistorytable


class RMONMIB::Etherhistorytable::Etherhistoryentry : public ydk::Entity
{
    public:
        Etherhistoryentry();
        ~Etherhistoryentry();

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

        ydk::YLeaf etherhistoryindex; //type: int32
        ydk::YLeaf etherhistorysampleindex; //type: int32
        ydk::YLeaf etherhistoryintervalstart; //type: uint32
        ydk::YLeaf etherhistorydropevents; //type: uint32
        ydk::YLeaf etherhistoryoctets; //type: uint32
        ydk::YLeaf etherhistorypkts; //type: uint32
        ydk::YLeaf etherhistorybroadcastpkts; //type: uint32
        ydk::YLeaf etherhistorymulticastpkts; //type: uint32
        ydk::YLeaf etherhistorycrcalignerrors; //type: uint32
        ydk::YLeaf etherhistoryundersizepkts; //type: uint32
        ydk::YLeaf etherhistoryoversizepkts; //type: uint32
        ydk::YLeaf etherhistoryfragments; //type: uint32
        ydk::YLeaf etherhistoryjabbers; //type: uint32
        ydk::YLeaf etherhistorycollisions; //type: uint32
        ydk::YLeaf etherhistoryutilization; //type: int32

}; // RMONMIB::Etherhistorytable::Etherhistoryentry


class RMONMIB::Alarmtable : public ydk::Entity
{
    public:
        Alarmtable();
        ~Alarmtable();

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

        class Alarmentry; //type: RMONMIB::Alarmtable::Alarmentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Alarmtable::Alarmentry> > alarmentry;
        
}; // RMONMIB::Alarmtable


class RMONMIB::Alarmtable::Alarmentry : public ydk::Entity
{
    public:
        Alarmentry();
        ~Alarmentry();

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

        ydk::YLeaf alarmindex; //type: int32
        ydk::YLeaf alarminterval; //type: int32
        ydk::YLeaf alarmvariable; //type: string
        ydk::YLeaf alarmsampletype; //type: Alarmsampletype
        ydk::YLeaf alarmvalue; //type: int32
        ydk::YLeaf alarmstartupalarm; //type: Alarmstartupalarm
        ydk::YLeaf alarmrisingthreshold; //type: int32
        ydk::YLeaf alarmfallingthreshold; //type: int32
        ydk::YLeaf alarmrisingeventindex; //type: int32
        ydk::YLeaf alarmfallingeventindex; //type: int32
        ydk::YLeaf alarmowner; //type: binary
        ydk::YLeaf alarmstatus; //type: EntryStatus
        class Alarmsampletype;
        class Alarmstartupalarm;

}; // RMONMIB::Alarmtable::Alarmentry


class RMONMIB::Hostcontroltable : public ydk::Entity
{
    public:
        Hostcontroltable();
        ~Hostcontroltable();

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

        class Hostcontrolentry; //type: RMONMIB::Hostcontroltable::Hostcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hostcontroltable::Hostcontrolentry> > hostcontrolentry;
        
}; // RMONMIB::Hostcontroltable


class RMONMIB::Hostcontroltable::Hostcontrolentry : public ydk::Entity
{
    public:
        Hostcontrolentry();
        ~Hostcontrolentry();

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

        ydk::YLeaf hostcontrolindex; //type: int32
        ydk::YLeaf hostcontroldatasource; //type: string
        ydk::YLeaf hostcontroltablesize; //type: int32
        ydk::YLeaf hostcontrollastdeletetime; //type: uint32
        ydk::YLeaf hostcontrolowner; //type: binary
        ydk::YLeaf hostcontrolstatus; //type: EntryStatus
        ydk::YLeaf hostcontroldroppedframes; //type: uint32
        ydk::YLeaf hostcontrolcreatetime; //type: uint32

}; // RMONMIB::Hostcontroltable::Hostcontrolentry


class RMONMIB::Hosttable : public ydk::Entity
{
    public:
        Hosttable();
        ~Hosttable();

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

        class Hostentry; //type: RMONMIB::Hosttable::Hostentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttable::Hostentry> > hostentry;
        
}; // RMONMIB::Hosttable


class RMONMIB::Hosttable::Hostentry : public ydk::Entity
{
    public:
        Hostentry();
        ~Hostentry();

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

        ydk::YLeaf hostindex; //type: int32
        ydk::YLeaf hostaddress; //type: binary
        ydk::YLeaf hostcreationorder; //type: int32
        ydk::YLeaf hostinpkts; //type: uint32
        ydk::YLeaf hostoutpkts; //type: uint32
        ydk::YLeaf hostinoctets; //type: uint32
        ydk::YLeaf hostoutoctets; //type: uint32
        ydk::YLeaf hostouterrors; //type: uint32
        ydk::YLeaf hostoutbroadcastpkts; //type: uint32
        ydk::YLeaf hostoutmulticastpkts; //type: uint32

}; // RMONMIB::Hosttable::Hostentry


class RMONMIB::Hosttimetable : public ydk::Entity
{
    public:
        Hosttimetable();
        ~Hosttimetable();

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

        class Hosttimeentry; //type: RMONMIB::Hosttimetable::Hosttimeentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttimetable::Hosttimeentry> > hosttimeentry;
        
}; // RMONMIB::Hosttimetable


class RMONMIB::Hosttimetable::Hosttimeentry : public ydk::Entity
{
    public:
        Hosttimeentry();
        ~Hosttimeentry();

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

        ydk::YLeaf hosttimeindex; //type: int32
        ydk::YLeaf hosttimecreationorder; //type: int32
        ydk::YLeaf hosttimeaddress; //type: binary
        ydk::YLeaf hosttimeinpkts; //type: uint32
        ydk::YLeaf hosttimeoutpkts; //type: uint32
        ydk::YLeaf hosttimeinoctets; //type: uint32
        ydk::YLeaf hosttimeoutoctets; //type: uint32
        ydk::YLeaf hosttimeouterrors; //type: uint32
        ydk::YLeaf hosttimeoutbroadcastpkts; //type: uint32
        ydk::YLeaf hosttimeoutmulticastpkts; //type: uint32

}; // RMONMIB::Hosttimetable::Hosttimeentry


class RMONMIB::Hosttopncontroltable : public ydk::Entity
{
    public:
        Hosttopncontroltable();
        ~Hosttopncontroltable();

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

        class Hosttopncontrolentry; //type: RMONMIB::Hosttopncontroltable::Hosttopncontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttopncontroltable::Hosttopncontrolentry> > hosttopncontrolentry;
        
}; // RMONMIB::Hosttopncontroltable


class RMONMIB::Hosttopncontroltable::Hosttopncontrolentry : public ydk::Entity
{
    public:
        Hosttopncontrolentry();
        ~Hosttopncontrolentry();

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

        ydk::YLeaf hosttopncontrolindex; //type: int32
        ydk::YLeaf hosttopnhostindex; //type: int32
        ydk::YLeaf hosttopnratebase; //type: Hosttopnratebase
        ydk::YLeaf hosttopntimeremaining; //type: int32
        ydk::YLeaf hosttopnduration; //type: int32
        ydk::YLeaf hosttopnrequestedsize; //type: int32
        ydk::YLeaf hosttopngrantedsize; //type: int32
        ydk::YLeaf hosttopnstarttime; //type: uint32
        ydk::YLeaf hosttopnowner; //type: binary
        ydk::YLeaf hosttopnstatus; //type: EntryStatus
        class Hosttopnratebase;

}; // RMONMIB::Hosttopncontroltable::Hosttopncontrolentry


class RMONMIB::Hosttopntable : public ydk::Entity
{
    public:
        Hosttopntable();
        ~Hosttopntable();

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

        class Hosttopnentry; //type: RMONMIB::Hosttopntable::Hosttopnentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Hosttopntable::Hosttopnentry> > hosttopnentry;
        
}; // RMONMIB::Hosttopntable


class RMONMIB::Hosttopntable::Hosttopnentry : public ydk::Entity
{
    public:
        Hosttopnentry();
        ~Hosttopnentry();

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

        ydk::YLeaf hosttopnreport; //type: int32
        ydk::YLeaf hosttopnindex; //type: int32
        ydk::YLeaf hosttopnaddress; //type: binary
        ydk::YLeaf hosttopnrate; //type: int32

}; // RMONMIB::Hosttopntable::Hosttopnentry


class RMONMIB::Matrixcontroltable : public ydk::Entity
{
    public:
        Matrixcontroltable();
        ~Matrixcontroltable();

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

        class Matrixcontrolentry; //type: RMONMIB::Matrixcontroltable::Matrixcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixcontroltable::Matrixcontrolentry> > matrixcontrolentry;
        
}; // RMONMIB::Matrixcontroltable


class RMONMIB::Matrixcontroltable::Matrixcontrolentry : public ydk::Entity
{
    public:
        Matrixcontrolentry();
        ~Matrixcontrolentry();

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

        ydk::YLeaf matrixcontrolindex; //type: int32
        ydk::YLeaf matrixcontroldatasource; //type: string
        ydk::YLeaf matrixcontroltablesize; //type: int32
        ydk::YLeaf matrixcontrollastdeletetime; //type: uint32
        ydk::YLeaf matrixcontrolowner; //type: binary
        ydk::YLeaf matrixcontrolstatus; //type: EntryStatus
        ydk::YLeaf matrixcontroldroppedframes; //type: uint32
        ydk::YLeaf matrixcontrolcreatetime; //type: uint32

}; // RMONMIB::Matrixcontroltable::Matrixcontrolentry


class RMONMIB::Matrixsdtable : public ydk::Entity
{
    public:
        Matrixsdtable();
        ~Matrixsdtable();

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

        class Matrixsdentry; //type: RMONMIB::Matrixsdtable::Matrixsdentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixsdtable::Matrixsdentry> > matrixsdentry;
        
}; // RMONMIB::Matrixsdtable


class RMONMIB::Matrixsdtable::Matrixsdentry : public ydk::Entity
{
    public:
        Matrixsdentry();
        ~Matrixsdentry();

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

        ydk::YLeaf matrixsdindex; //type: int32
        ydk::YLeaf matrixsdsourceaddress; //type: binary
        ydk::YLeaf matrixsddestaddress; //type: binary
        ydk::YLeaf matrixsdpkts; //type: uint32
        ydk::YLeaf matrixsdoctets; //type: uint32
        ydk::YLeaf matrixsderrors; //type: uint32

}; // RMONMIB::Matrixsdtable::Matrixsdentry


class RMONMIB::Matrixdstable : public ydk::Entity
{
    public:
        Matrixdstable();
        ~Matrixdstable();

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

        class Matrixdsentry; //type: RMONMIB::Matrixdstable::Matrixdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Matrixdstable::Matrixdsentry> > matrixdsentry;
        
}; // RMONMIB::Matrixdstable


class RMONMIB::Matrixdstable::Matrixdsentry : public ydk::Entity
{
    public:
        Matrixdsentry();
        ~Matrixdsentry();

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

        ydk::YLeaf matrixdsindex; //type: int32
        ydk::YLeaf matrixdsdestaddress; //type: binary
        ydk::YLeaf matrixdssourceaddress; //type: binary
        ydk::YLeaf matrixdspkts; //type: uint32
        ydk::YLeaf matrixdsoctets; //type: uint32
        ydk::YLeaf matrixdserrors; //type: uint32

}; // RMONMIB::Matrixdstable::Matrixdsentry


class RMONMIB::Filtertable : public ydk::Entity
{
    public:
        Filtertable();
        ~Filtertable();

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

        class Filterentry; //type: RMONMIB::Filtertable::Filterentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Filtertable::Filterentry> > filterentry;
        
}; // RMONMIB::Filtertable


class RMONMIB::Filtertable::Filterentry : public ydk::Entity
{
    public:
        Filterentry();
        ~Filterentry();

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

        ydk::YLeaf filterindex; //type: int32
        ydk::YLeaf filterchannelindex; //type: int32
        ydk::YLeaf filterpktdataoffset; //type: int32
        ydk::YLeaf filterpktdata; //type: binary
        ydk::YLeaf filterpktdatamask; //type: binary
        ydk::YLeaf filterpktdatanotmask; //type: binary
        ydk::YLeaf filterpktstatus; //type: int32
        ydk::YLeaf filterpktstatusmask; //type: int32
        ydk::YLeaf filterpktstatusnotmask; //type: int32
        ydk::YLeaf filterowner; //type: binary
        ydk::YLeaf filterstatus; //type: EntryStatus
        ydk::YLeaf filterprotocoldirdatalocalindex; //type: int32
        ydk::YLeaf filterprotocoldirlocalindex; //type: int32

}; // RMONMIB::Filtertable::Filterentry


class RMONMIB::Channeltable : public ydk::Entity
{
    public:
        Channeltable();
        ~Channeltable();

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

        class Channelentry; //type: RMONMIB::Channeltable::Channelentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Channeltable::Channelentry> > channelentry;
        
}; // RMONMIB::Channeltable


class RMONMIB::Channeltable::Channelentry : public ydk::Entity
{
    public:
        Channelentry();
        ~Channelentry();

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

        ydk::YLeaf channelindex; //type: int32
        ydk::YLeaf channelifindex; //type: int32
        ydk::YLeaf channelaccepttype; //type: Channelaccepttype
        ydk::YLeaf channeldatacontrol; //type: Channeldatacontrol
        ydk::YLeaf channelturnoneventindex; //type: int32
        ydk::YLeaf channelturnoffeventindex; //type: int32
        ydk::YLeaf channeleventindex; //type: int32
        ydk::YLeaf channeleventstatus; //type: Channeleventstatus
        ydk::YLeaf channelmatches; //type: uint32
        ydk::YLeaf channeldescription; //type: string
        ydk::YLeaf channelowner; //type: binary
        ydk::YLeaf channelstatus; //type: EntryStatus
        ydk::YLeaf channeldroppedframes; //type: uint32
        ydk::YLeaf channelcreatetime; //type: uint32
        class Channelaccepttype;
        class Channeldatacontrol;
        class Channeleventstatus;

}; // RMONMIB::Channeltable::Channelentry


class RMONMIB::Buffercontroltable : public ydk::Entity
{
    public:
        Buffercontroltable();
        ~Buffercontroltable();

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

        class Buffercontrolentry; //type: RMONMIB::Buffercontroltable::Buffercontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Buffercontroltable::Buffercontrolentry> > buffercontrolentry;
        
}; // RMONMIB::Buffercontroltable


class RMONMIB::Buffercontroltable::Buffercontrolentry : public ydk::Entity
{
    public:
        Buffercontrolentry();
        ~Buffercontrolentry();

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

        ydk::YLeaf buffercontrolindex; //type: int32
        ydk::YLeaf buffercontrolchannelindex; //type: int32
        ydk::YLeaf buffercontrolfullstatus; //type: Buffercontrolfullstatus
        ydk::YLeaf buffercontrolfullaction; //type: Buffercontrolfullaction
        ydk::YLeaf buffercontrolcaptureslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadoffset; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsrequested; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsgranted; //type: int32
        ydk::YLeaf buffercontrolcapturedpackets; //type: int32
        ydk::YLeaf buffercontrolturnontime; //type: uint32
        ydk::YLeaf buffercontrolowner; //type: binary
        ydk::YLeaf buffercontrolstatus; //type: EntryStatus
        class Buffercontrolfullstatus;
        class Buffercontrolfullaction;

}; // RMONMIB::Buffercontroltable::Buffercontrolentry


class RMONMIB::Capturebuffertable : public ydk::Entity
{
    public:
        Capturebuffertable();
        ~Capturebuffertable();

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

        class Capturebufferentry; //type: RMONMIB::Capturebuffertable::Capturebufferentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Capturebuffertable::Capturebufferentry> > capturebufferentry;
        
}; // RMONMIB::Capturebuffertable


class RMONMIB::Capturebuffertable::Capturebufferentry : public ydk::Entity
{
    public:
        Capturebufferentry();
        ~Capturebufferentry();

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

        ydk::YLeaf capturebuffercontrolindex; //type: int32
        ydk::YLeaf capturebufferindex; //type: int32
        ydk::YLeaf capturebufferpacketid; //type: int32
        ydk::YLeaf capturebufferpacketdata; //type: binary
        ydk::YLeaf capturebufferpacketlength; //type: int32
        ydk::YLeaf capturebufferpackettime; //type: int32
        ydk::YLeaf capturebufferpacketstatus; //type: int32

}; // RMONMIB::Capturebuffertable::Capturebufferentry


class RMONMIB::Eventtable : public ydk::Entity
{
    public:
        Eventtable();
        ~Eventtable();

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

        class Evententry; //type: RMONMIB::Eventtable::Evententry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Eventtable::Evententry> > evententry;
        
}; // RMONMIB::Eventtable


class RMONMIB::Eventtable::Evententry : public ydk::Entity
{
    public:
        Evententry();
        ~Evententry();

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

        ydk::YLeaf eventindex; //type: int32
        ydk::YLeaf eventdescription; //type: string
        ydk::YLeaf eventtype; //type: Eventtype
        ydk::YLeaf eventcommunity; //type: binary
        ydk::YLeaf eventlasttimesent; //type: uint32
        ydk::YLeaf eventowner; //type: binary
        ydk::YLeaf eventstatus; //type: EntryStatus
        class Eventtype;

}; // RMONMIB::Eventtable::Evententry


class RMONMIB::Logtable : public ydk::Entity
{
    public:
        Logtable();
        ~Logtable();

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

        class Logentry; //type: RMONMIB::Logtable::Logentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON_MIB::RMONMIB::Logtable::Logentry> > logentry;
        
}; // RMONMIB::Logtable


class RMONMIB::Logtable::Logentry : public ydk::Entity
{
    public:
        Logentry();
        ~Logentry();

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

        ydk::YLeaf logeventindex; //type: int32
        ydk::YLeaf logindex; //type: int32
        ydk::YLeaf logtime; //type: uint32
        ydk::YLeaf logdescription; //type: string

}; // RMONMIB::Logtable::Logentry

class EntryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

};

class RMONMIB::Alarmtable::Alarmentry::Alarmsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class RMONMIB::Alarmtable::Alarmentry::Alarmstartupalarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingAlarm;
        static const ydk::Enum::YLeaf fallingAlarm;
        static const ydk::Enum::YLeaf risingOrFallingAlarm;

};

class RMONMIB::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostTopNInPkts;
        static const ydk::Enum::YLeaf hostTopNOutPkts;
        static const ydk::Enum::YLeaf hostTopNInOctets;
        static const ydk::Enum::YLeaf hostTopNOutOctets;
        static const ydk::Enum::YLeaf hostTopNOutErrors;
        static const ydk::Enum::YLeaf hostTopNOutBroadcastPkts;
        static const ydk::Enum::YLeaf hostTopNOutMulticastPkts;

};

class RMONMIB::Channeltable::Channelentry::Channelaccepttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptMatched;
        static const ydk::Enum::YLeaf acceptFailed;

};

class RMONMIB::Channeltable::Channelentry::Channeldatacontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class RMONMIB::Channeltable::Channelentry::Channeleventstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eventReady;
        static const ydk::Enum::YLeaf eventFired;
        static const ydk::Enum::YLeaf eventAlwaysReady;

};

class RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spaceAvailable;
        static const ydk::Enum::YLeaf full;

};

class RMONMIB::Buffercontroltable::Buffercontrolentry::Buffercontrolfullaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lockWhenFull;
        static const ydk::Enum::YLeaf wrapWhenFull;

};

class RMONMIB::Eventtable::Evententry::Eventtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf logandtrap;

};


}
}

#endif /* _RMON_MIB_ */

