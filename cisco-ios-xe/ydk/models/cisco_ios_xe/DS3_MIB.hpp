#ifndef _DS3_MIB_
#define _DS3_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace DS3_MIB {

class Ds3Mib : public ydk::Entity
{
    public:
        Ds3Mib();
        ~Ds3Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Dsx3Configtable; //type: Ds3Mib::Dsx3Configtable
        class Dsx3Currenttable; //type: Ds3Mib::Dsx3Currenttable
        class Dsx3Intervaltable; //type: Ds3Mib::Dsx3Intervaltable
        class Dsx3Totaltable; //type: Ds3Mib::Dsx3Totaltable
        class Dsx3Farendconfigtable; //type: Ds3Mib::Dsx3Farendconfigtable
        class Dsx3Farendcurrenttable; //type: Ds3Mib::Dsx3Farendcurrenttable
        class Dsx3Farendintervaltable; //type: Ds3Mib::Dsx3Farendintervaltable
        class Dsx3Farendtotaltable; //type: Ds3Mib::Dsx3Farendtotaltable
        class Dsx3Fractable; //type: Ds3Mib::Dsx3Fractable

        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Configtable> dsx3configtable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Currenttable> dsx3currenttable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendconfigtable> dsx3farendconfigtable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendcurrenttable> dsx3farendcurrenttable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendintervaltable> dsx3farendintervaltable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendtotaltable> dsx3farendtotaltable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Fractable> dsx3fractable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Intervaltable> dsx3intervaltable;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Totaltable> dsx3totaltable;
        
}; // Ds3Mib


class Ds3Mib::Dsx3Configtable : public ydk::Entity
{
    public:
        Dsx3Configtable();
        ~Dsx3Configtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Configentry; //type: Ds3Mib::Dsx3Configtable::Dsx3Configentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Configtable::Dsx3Configentry> > dsx3configentry;
        
}; // Ds3Mib::Dsx3Configtable


class Ds3Mib::Dsx3Configtable::Dsx3Configentry : public ydk::Entity
{
    public:
        Dsx3Configentry();
        ~Dsx3Configentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3lineindex; //type: int32
        ydk::YLeaf dsx3ifindex; //type: int32
        ydk::YLeaf dsx3timeelapsed; //type: int32
        ydk::YLeaf dsx3validintervals; //type: int32
        ydk::YLeaf dsx3linetype; //type: Dsx3Linetype
        ydk::YLeaf dsx3linecoding; //type: Dsx3Linecoding
        ydk::YLeaf dsx3sendcode; //type: Dsx3Sendcode
        ydk::YLeaf dsx3circuitidentifier; //type: string
        ydk::YLeaf dsx3loopbackconfig; //type: Dsx3Loopbackconfig
        ydk::YLeaf dsx3linestatus; //type: int32
        ydk::YLeaf dsx3transmitclocksource; //type: Dsx3Transmitclocksource
        ydk::YLeaf dsx3invalidintervals; //type: int32
        ydk::YLeaf dsx3linelength; //type: int32
        ydk::YLeaf dsx3linestatuslastchange; //type: uint32
        ydk::YLeaf dsx3linestatuschangetrapenable; //type: Dsx3Linestatuschangetrapenable
        ydk::YLeaf dsx3loopbackstatus; //type: int32
        ydk::YLeaf dsx3channelization; //type: Dsx3Channelization
        ydk::YLeaf dsx3ds1forremoteloop; //type: int32
        class Dsx3Linetype;
        class Dsx3Linecoding;
        class Dsx3Sendcode;
        class Dsx3Loopbackconfig;
        class Dsx3Transmitclocksource;
        class Dsx3Linestatuschangetrapenable;
        class Dsx3Channelization;

}; // Ds3Mib::Dsx3Configtable::Dsx3Configentry


class Ds3Mib::Dsx3Currenttable : public ydk::Entity
{
    public:
        Dsx3Currenttable();
        ~Dsx3Currenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Currententry; //type: Ds3Mib::Dsx3Currenttable::Dsx3Currententry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Currenttable::Dsx3Currententry> > dsx3currententry;
        
}; // Ds3Mib::Dsx3Currenttable


class Ds3Mib::Dsx3Currenttable::Dsx3Currententry : public ydk::Entity
{
    public:
        Dsx3Currententry();
        ~Dsx3Currententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Ds3Mib::Dsx3Currenttable::Dsx3Currententry


class Ds3Mib::Dsx3Intervaltable : public ydk::Entity
{
    public:
        Dsx3Intervaltable();
        ~Dsx3Intervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Intervalentry; //type: Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry> > dsx3intervalentry;
        
}; // Ds3Mib::Dsx3Intervaltable


class Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry : public ydk::Entity
{
    public:
        Dsx3Intervalentry();
        ~Dsx3Intervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry


class Ds3Mib::Dsx3Totaltable : public ydk::Entity
{
    public:
        Dsx3Totaltable();
        ~Dsx3Totaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Totalentry; //type: Ds3Mib::Dsx3Totaltable::Dsx3Totalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Totaltable::Dsx3Totalentry> > dsx3totalentry;
        
}; // Ds3Mib::Dsx3Totaltable


class Ds3Mib::Dsx3Totaltable::Dsx3Totalentry : public ydk::Entity
{
    public:
        Dsx3Totalentry();
        ~Dsx3Totalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Ds3Mib::Dsx3Totaltable::Dsx3Totalentry


class Ds3Mib::Dsx3Farendconfigtable : public ydk::Entity
{
    public:
        Dsx3Farendconfigtable();
        ~Dsx3Farendconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Farendconfigentry; //type: Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry> > dsx3farendconfigentry;
        
}; // Ds3Mib::Dsx3Farendconfigtable


class Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry : public ydk::Entity
{
    public:
        Dsx3Farendconfigentry();
        ~Dsx3Farendconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3farendlineindex; //type: int32
        ydk::YLeaf dsx3farendequipcode; //type: string
        ydk::YLeaf dsx3farendlocationidcode; //type: string
        ydk::YLeaf dsx3farendframeidcode; //type: string
        ydk::YLeaf dsx3farendunitcode; //type: string
        ydk::YLeaf dsx3farendfacilityidcode; //type: string

}; // Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry


class Ds3Mib::Dsx3Farendcurrenttable : public ydk::Entity
{
    public:
        Dsx3Farendcurrenttable();
        ~Dsx3Farendcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Farendcurrententry; //type: Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry> > dsx3farendcurrententry;
        
}; // Ds3Mib::Dsx3Farendcurrenttable


class Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry : public ydk::Entity
{
    public:
        Dsx3Farendcurrententry();
        ~Dsx3Farendcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3farendcurrentindex; //type: int32
        ydk::YLeaf dsx3farendtimeelapsed; //type: int32
        ydk::YLeaf dsx3farendvalidintervals; //type: int32
        ydk::YLeaf dsx3farendcurrentcess; //type: uint32
        ydk::YLeaf dsx3farendcurrentcsess; //type: uint32
        ydk::YLeaf dsx3farendcurrentccvs; //type: uint32
        ydk::YLeaf dsx3farendcurrentuass; //type: uint32
        ydk::YLeaf dsx3farendinvalidintervals; //type: int32

}; // Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry


class Ds3Mib::Dsx3Farendintervaltable : public ydk::Entity
{
    public:
        Dsx3Farendintervaltable();
        ~Dsx3Farendintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Farendintervalentry; //type: Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry> > dsx3farendintervalentry;
        
}; // Ds3Mib::Dsx3Farendintervaltable


class Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry : public ydk::Entity
{
    public:
        Dsx3Farendintervalentry();
        ~Dsx3Farendintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3farendintervalindex; //type: int32
        ydk::YLeaf dsx3farendintervalnumber; //type: int32
        ydk::YLeaf dsx3farendintervalcess; //type: uint32
        ydk::YLeaf dsx3farendintervalcsess; //type: uint32
        ydk::YLeaf dsx3farendintervalccvs; //type: uint32
        ydk::YLeaf dsx3farendintervaluass; //type: uint32
        ydk::YLeaf dsx3farendintervalvaliddata; //type: boolean

}; // Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry


class Ds3Mib::Dsx3Farendtotaltable : public ydk::Entity
{
    public:
        Dsx3Farendtotaltable();
        ~Dsx3Farendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Farendtotalentry; //type: Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry> > dsx3farendtotalentry;
        
}; // Ds3Mib::Dsx3Farendtotaltable


class Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry : public ydk::Entity
{
    public:
        Dsx3Farendtotalentry();
        ~Dsx3Farendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3farendtotalindex; //type: int32
        ydk::YLeaf dsx3farendtotalcess; //type: uint32
        ydk::YLeaf dsx3farendtotalcsess; //type: uint32
        ydk::YLeaf dsx3farendtotalccvs; //type: uint32
        ydk::YLeaf dsx3farendtotaluass; //type: uint32

}; // Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry


class Ds3Mib::Dsx3Fractable : public ydk::Entity
{
    public:
        Dsx3Fractable();
        ~Dsx3Fractable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dsx3Fracentry; //type: Ds3Mib::Dsx3Fractable::Dsx3Fracentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Fractable::Dsx3Fracentry> > dsx3fracentry;
        
}; // Ds3Mib::Dsx3Fractable


class Ds3Mib::Dsx3Fractable::Dsx3Fracentry : public ydk::Entity
{
    public:
        Dsx3Fracentry();
        ~Dsx3Fracentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dsx3fracindex; //type: int32
        ydk::YLeaf dsx3fracnumber; //type: int32
        ydk::YLeaf dsx3fracifindex; //type: int32

}; // Ds3Mib::Dsx3Fractable::Dsx3Fracentry

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Linetype : public ydk::Enum
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

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Linecoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3Other;
        static const ydk::Enum::YLeaf dsx3B3ZS;
        static const ydk::Enum::YLeaf e3HDB3;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Sendcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3SendNoCode;
        static const ydk::Enum::YLeaf dsx3SendLineCode;
        static const ydk::Enum::YLeaf dsx3SendPayloadCode;
        static const ydk::Enum::YLeaf dsx3SendResetCode;
        static const ydk::Enum::YLeaf dsx3SendDS1LoopCode;
        static const ydk::Enum::YLeaf dsx3SendTestPattern;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Loopbackconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx3NoLoop;
        static const ydk::Enum::YLeaf dsx3PayloadLoop;
        static const ydk::Enum::YLeaf dsx3LineLoop;
        static const ydk::Enum::YLeaf dsx3OtherLoop;
        static const ydk::Enum::YLeaf dsx3InwardLoop;
        static const ydk::Enum::YLeaf dsx3DualLoop;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Transmitclocksource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;
        static const ydk::Enum::YLeaf throughTiming;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Linestatuschangetrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Channelization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledDs1;
        static const ydk::Enum::YLeaf enabledDs2;

};


}
}

#endif /* _DS3_MIB_ */

