#ifndef _DS3_MIB_
#define _DS3_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace DS3_MIB {

class DS3MIB : public ydk::Entity
{
    public:
        DS3MIB();
        ~DS3MIB();

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

        class Dsx3ConfigTable; //type: DS3MIB::Dsx3ConfigTable
        class Dsx3CurrentTable; //type: DS3MIB::Dsx3CurrentTable
        class Dsx3IntervalTable; //type: DS3MIB::Dsx3IntervalTable
        class Dsx3TotalTable; //type: DS3MIB::Dsx3TotalTable
        class Dsx3FarEndConfigTable; //type: DS3MIB::Dsx3FarEndConfigTable
        class Dsx3FarEndCurrentTable; //type: DS3MIB::Dsx3FarEndCurrentTable
        class Dsx3FarEndIntervalTable; //type: DS3MIB::Dsx3FarEndIntervalTable
        class Dsx3FarEndTotalTable; //type: DS3MIB::Dsx3FarEndTotalTable
        class Dsx3FracTable; //type: DS3MIB::Dsx3FracTable

        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3ConfigTable> dsx3configtable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3CurrentTable> dsx3currenttable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3IntervalTable> dsx3intervaltable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3TotalTable> dsx3totaltable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3FarEndConfigTable> dsx3farendconfigtable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3FarEndCurrentTable> dsx3farendcurrenttable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3FarEndIntervalTable> dsx3farendintervaltable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3FarEndTotalTable> dsx3farendtotaltable;
        std::shared_ptr<cisco_ios_xe::DS3_MIB::DS3MIB::Dsx3FracTable> dsx3fractable;
        
}; // DS3MIB


class DS3MIB::Dsx3ConfigTable : public ydk::Entity
{
    public:
        Dsx3ConfigTable();
        ~Dsx3ConfigTable();

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

        class Dsx3ConfigEntry; //type: DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry

        ydk::YList dsx3configentry;
        
}; // DS3MIB::Dsx3ConfigTable


class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry : public ydk::Entity
{
    public:
        Dsx3ConfigEntry();
        ~Dsx3ConfigEntry();

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

        ydk::YLeaf dsx3lineindex; //type: int32
        ydk::YLeaf dsx3ifindex; //type: int32
        ydk::YLeaf dsx3timeelapsed; //type: int32
        ydk::YLeaf dsx3validintervals; //type: int32
        ydk::YLeaf dsx3linetype; //type: Dsx3LineType
        ydk::YLeaf dsx3linecoding; //type: Dsx3LineCoding
        ydk::YLeaf dsx3sendcode; //type: Dsx3SendCode
        ydk::YLeaf dsx3circuitidentifier; //type: string
        ydk::YLeaf dsx3loopbackconfig; //type: Dsx3LoopbackConfig
        ydk::YLeaf dsx3linestatus; //type: int32
        ydk::YLeaf dsx3transmitclocksource; //type: Dsx3TransmitClockSource
        ydk::YLeaf dsx3invalidintervals; //type: int32
        ydk::YLeaf dsx3linelength; //type: int32
        ydk::YLeaf dsx3linestatuslastchange; //type: uint32
        ydk::YLeaf dsx3linestatuschangetrapenable; //type: Dsx3LineStatusChangeTrapEnable
        ydk::YLeaf dsx3loopbackstatus; //type: int32
        ydk::YLeaf dsx3channelization; //type: Dsx3Channelization
        ydk::YLeaf dsx3ds1forremoteloop; //type: int32
        class Dsx3LineType;
        class Dsx3LineCoding;
        class Dsx3SendCode;
        class Dsx3LoopbackConfig;
        class Dsx3TransmitClockSource;
        class Dsx3LineStatusChangeTrapEnable;
        class Dsx3Channelization;

}; // DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry


class DS3MIB::Dsx3CurrentTable : public ydk::Entity
{
    public:
        Dsx3CurrentTable();
        ~Dsx3CurrentTable();

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

        class Dsx3CurrentEntry; //type: DS3MIB::Dsx3CurrentTable::Dsx3CurrentEntry

        ydk::YList dsx3currententry;
        
}; // DS3MIB::Dsx3CurrentTable


class DS3MIB::Dsx3CurrentTable::Dsx3CurrentEntry : public ydk::Entity
{
    public:
        Dsx3CurrentEntry();
        ~Dsx3CurrentEntry();

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

        ydk::YLeaf dsx3currentindex; //type: int32
        ydk::YLeaf dsx3currentpess; //type: uint32
        ydk::YLeaf dsx3currentpsess; //type: uint32
        ydk::YLeaf dsx3currentsefss; //type: uint32
        ydk::YLeaf dsx3currentuass; //type: uint32
        ydk::YLeaf dsx3currentlcvs; //type: uint32
        ydk::YLeaf dsx3currentpcvs; //type: uint32
        ydk::YLeaf dsx3currentless; //type: uint32
        ydk::YLeaf dsx3currentccvs; //type: uint32
        ydk::YLeaf dsx3currentcess; //type: uint32
        ydk::YLeaf dsx3currentcsess; //type: uint32

}; // DS3MIB::Dsx3CurrentTable::Dsx3CurrentEntry


class DS3MIB::Dsx3IntervalTable : public ydk::Entity
{
    public:
        Dsx3IntervalTable();
        ~Dsx3IntervalTable();

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

        class Dsx3IntervalEntry; //type: DS3MIB::Dsx3IntervalTable::Dsx3IntervalEntry

        ydk::YList dsx3intervalentry;
        
}; // DS3MIB::Dsx3IntervalTable


class DS3MIB::Dsx3IntervalTable::Dsx3IntervalEntry : public ydk::Entity
{
    public:
        Dsx3IntervalEntry();
        ~Dsx3IntervalEntry();

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

        ydk::YLeaf dsx3intervalindex; //type: int32
        ydk::YLeaf dsx3intervalnumber; //type: int32
        ydk::YLeaf dsx3intervalpess; //type: uint32
        ydk::YLeaf dsx3intervalpsess; //type: uint32
        ydk::YLeaf dsx3intervalsefss; //type: uint32
        ydk::YLeaf dsx3intervaluass; //type: uint32
        ydk::YLeaf dsx3intervallcvs; //type: uint32
        ydk::YLeaf dsx3intervalpcvs; //type: uint32
        ydk::YLeaf dsx3intervalless; //type: uint32
        ydk::YLeaf dsx3intervalccvs; //type: uint32
        ydk::YLeaf dsx3intervalcess; //type: uint32
        ydk::YLeaf dsx3intervalcsess; //type: uint32
        ydk::YLeaf dsx3intervalvaliddata; //type: boolean

}; // DS3MIB::Dsx3IntervalTable::Dsx3IntervalEntry


class DS3MIB::Dsx3TotalTable : public ydk::Entity
{
    public:
        Dsx3TotalTable();
        ~Dsx3TotalTable();

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

        class Dsx3TotalEntry; //type: DS3MIB::Dsx3TotalTable::Dsx3TotalEntry

        ydk::YList dsx3totalentry;
        
}; // DS3MIB::Dsx3TotalTable


class DS3MIB::Dsx3TotalTable::Dsx3TotalEntry : public ydk::Entity
{
    public:
        Dsx3TotalEntry();
        ~Dsx3TotalEntry();

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

        ydk::YLeaf dsx3totalindex; //type: int32
        ydk::YLeaf dsx3totalpess; //type: uint32
        ydk::YLeaf dsx3totalpsess; //type: uint32
        ydk::YLeaf dsx3totalsefss; //type: uint32
        ydk::YLeaf dsx3totaluass; //type: uint32
        ydk::YLeaf dsx3totallcvs; //type: uint32
        ydk::YLeaf dsx3totalpcvs; //type: uint32
        ydk::YLeaf dsx3totalless; //type: uint32
        ydk::YLeaf dsx3totalccvs; //type: uint32
        ydk::YLeaf dsx3totalcess; //type: uint32
        ydk::YLeaf dsx3totalcsess; //type: uint32

}; // DS3MIB::Dsx3TotalTable::Dsx3TotalEntry


class DS3MIB::Dsx3FarEndConfigTable : public ydk::Entity
{
    public:
        Dsx3FarEndConfigTable();
        ~Dsx3FarEndConfigTable();

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

        class Dsx3FarEndConfigEntry; //type: DS3MIB::Dsx3FarEndConfigTable::Dsx3FarEndConfigEntry

        ydk::YList dsx3farendconfigentry;
        
}; // DS3MIB::Dsx3FarEndConfigTable


class DS3MIB::Dsx3FarEndConfigTable::Dsx3FarEndConfigEntry : public ydk::Entity
{
    public:
        Dsx3FarEndConfigEntry();
        ~Dsx3FarEndConfigEntry();

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

        ydk::YLeaf dsx3farendlineindex; //type: int32
        ydk::YLeaf dsx3farendequipcode; //type: string
        ydk::YLeaf dsx3farendlocationidcode; //type: string
        ydk::YLeaf dsx3farendframeidcode; //type: string
        ydk::YLeaf dsx3farendunitcode; //type: string
        ydk::YLeaf dsx3farendfacilityidcode; //type: string

}; // DS3MIB::Dsx3FarEndConfigTable::Dsx3FarEndConfigEntry


class DS3MIB::Dsx3FarEndCurrentTable : public ydk::Entity
{
    public:
        Dsx3FarEndCurrentTable();
        ~Dsx3FarEndCurrentTable();

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

        class Dsx3FarEndCurrentEntry; //type: DS3MIB::Dsx3FarEndCurrentTable::Dsx3FarEndCurrentEntry

        ydk::YList dsx3farendcurrententry;
        
}; // DS3MIB::Dsx3FarEndCurrentTable


class DS3MIB::Dsx3FarEndCurrentTable::Dsx3FarEndCurrentEntry : public ydk::Entity
{
    public:
        Dsx3FarEndCurrentEntry();
        ~Dsx3FarEndCurrentEntry();

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

        ydk::YLeaf dsx3farendcurrentindex; //type: int32
        ydk::YLeaf dsx3farendtimeelapsed; //type: int32
        ydk::YLeaf dsx3farendvalidintervals; //type: int32
        ydk::YLeaf dsx3farendcurrentcess; //type: uint32
        ydk::YLeaf dsx3farendcurrentcsess; //type: uint32
        ydk::YLeaf dsx3farendcurrentccvs; //type: uint32
        ydk::YLeaf dsx3farendcurrentuass; //type: uint32
        ydk::YLeaf dsx3farendinvalidintervals; //type: int32

}; // DS3MIB::Dsx3FarEndCurrentTable::Dsx3FarEndCurrentEntry


class DS3MIB::Dsx3FarEndIntervalTable : public ydk::Entity
{
    public:
        Dsx3FarEndIntervalTable();
        ~Dsx3FarEndIntervalTable();

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

        class Dsx3FarEndIntervalEntry; //type: DS3MIB::Dsx3FarEndIntervalTable::Dsx3FarEndIntervalEntry

        ydk::YList dsx3farendintervalentry;
        
}; // DS3MIB::Dsx3FarEndIntervalTable


class DS3MIB::Dsx3FarEndIntervalTable::Dsx3FarEndIntervalEntry : public ydk::Entity
{
    public:
        Dsx3FarEndIntervalEntry();
        ~Dsx3FarEndIntervalEntry();

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

        ydk::YLeaf dsx3farendintervalindex; //type: int32
        ydk::YLeaf dsx3farendintervalnumber; //type: int32
        ydk::YLeaf dsx3farendintervalcess; //type: uint32
        ydk::YLeaf dsx3farendintervalcsess; //type: uint32
        ydk::YLeaf dsx3farendintervalccvs; //type: uint32
        ydk::YLeaf dsx3farendintervaluass; //type: uint32
        ydk::YLeaf dsx3farendintervalvaliddata; //type: boolean

}; // DS3MIB::Dsx3FarEndIntervalTable::Dsx3FarEndIntervalEntry


class DS3MIB::Dsx3FarEndTotalTable : public ydk::Entity
{
    public:
        Dsx3FarEndTotalTable();
        ~Dsx3FarEndTotalTable();

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

        class Dsx3FarEndTotalEntry; //type: DS3MIB::Dsx3FarEndTotalTable::Dsx3FarEndTotalEntry

        ydk::YList dsx3farendtotalentry;
        
}; // DS3MIB::Dsx3FarEndTotalTable


class DS3MIB::Dsx3FarEndTotalTable::Dsx3FarEndTotalEntry : public ydk::Entity
{
    public:
        Dsx3FarEndTotalEntry();
        ~Dsx3FarEndTotalEntry();

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

        ydk::YLeaf dsx3farendtotalindex; //type: int32
        ydk::YLeaf dsx3farendtotalcess; //type: uint32
        ydk::YLeaf dsx3farendtotalcsess; //type: uint32
        ydk::YLeaf dsx3farendtotalccvs; //type: uint32
        ydk::YLeaf dsx3farendtotaluass; //type: uint32

}; // DS3MIB::Dsx3FarEndTotalTable::Dsx3FarEndTotalEntry


class DS3MIB::Dsx3FracTable : public ydk::Entity
{
    public:
        Dsx3FracTable();
        ~Dsx3FracTable();

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

        class Dsx3FracEntry; //type: DS3MIB::Dsx3FracTable::Dsx3FracEntry

        ydk::YList dsx3fracentry;
        
}; // DS3MIB::Dsx3FracTable


class DS3MIB::Dsx3FracTable::Dsx3FracEntry : public ydk::Entity
{
    public:
        Dsx3FracEntry();
        ~Dsx3FracEntry();

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

        ydk::YLeaf dsx3fracindex; //type: int32
        ydk::YLeaf dsx3fracnumber; //type: int32
        ydk::YLeaf dsx3fracifindex; //type: int32

}; // DS3MIB::Dsx3FracTable::Dsx3FracEntry

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3LineType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3other;
        static const ydk::Enum::YLeaf dsx3M23;
        static const ydk::Enum::YLeaf dsx3SYNTRAN;
        static const ydk::Enum::YLeaf dsx3CbitParity;
        static const ydk::Enum::YLeaf dsx3ClearChannel;
        static const ydk::Enum::YLeaf e3other;
        static const ydk::Enum::YLeaf e3Framed;
        static const ydk::Enum::YLeaf e3Plcp;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx3other") return 1;
            if (name == "dsx3M23") return 2;
            if (name == "dsx3SYNTRAN") return 3;
            if (name == "dsx3CbitParity") return 4;
            if (name == "dsx3ClearChannel") return 5;
            if (name == "e3other") return 6;
            if (name == "e3Framed") return 7;
            if (name == "e3Plcp") return 8;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3LineCoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3Other;
        static const ydk::Enum::YLeaf dsx3B3ZS;
        static const ydk::Enum::YLeaf e3HDB3;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx3Other") return 1;
            if (name == "dsx3B3ZS") return 2;
            if (name == "e3HDB3") return 3;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3SendCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3SendNoCode;
        static const ydk::Enum::YLeaf dsx3SendLineCode;
        static const ydk::Enum::YLeaf dsx3SendPayloadCode;
        static const ydk::Enum::YLeaf dsx3SendResetCode;
        static const ydk::Enum::YLeaf dsx3SendDS1LoopCode;
        static const ydk::Enum::YLeaf dsx3SendTestPattern;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx3SendNoCode") return 1;
            if (name == "dsx3SendLineCode") return 2;
            if (name == "dsx3SendPayloadCode") return 3;
            if (name == "dsx3SendResetCode") return 4;
            if (name == "dsx3SendDS1LoopCode") return 5;
            if (name == "dsx3SendTestPattern") return 6;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3LoopbackConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3NoLoop;
        static const ydk::Enum::YLeaf dsx3PayloadLoop;
        static const ydk::Enum::YLeaf dsx3LineLoop;
        static const ydk::Enum::YLeaf dsx3OtherLoop;
        static const ydk::Enum::YLeaf dsx3InwardLoop;
        static const ydk::Enum::YLeaf dsx3DualLoop;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx3NoLoop") return 1;
            if (name == "dsx3PayloadLoop") return 2;
            if (name == "dsx3LineLoop") return 3;
            if (name == "dsx3OtherLoop") return 4;
            if (name == "dsx3InwardLoop") return 5;
            if (name == "dsx3DualLoop") return 6;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3TransmitClockSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;
        static const ydk::Enum::YLeaf throughTiming;

        static int get_enum_value(const std::string & name) {
            if (name == "loopTiming") return 1;
            if (name == "localTiming") return 2;
            if (name == "throughTiming") return 3;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3LineStatusChangeTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class DS3MIB::Dsx3ConfigTable::Dsx3ConfigEntry::Dsx3Channelization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledDs1;
        static const ydk::Enum::YLeaf enabledDs2;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabledDs1") return 2;
            if (name == "enabledDs2") return 3;
            return -1;
        }
};


}
}

#endif /* _DS3_MIB_ */

