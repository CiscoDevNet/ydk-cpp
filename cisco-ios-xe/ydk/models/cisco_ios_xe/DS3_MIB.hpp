#ifndef _DS3_MIB_
#define _DS3_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace DS3_MIB {

class Ds3Mib : public Entity
{
    public:
        Ds3Mib();
        ~Ds3Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Dsx3Configtable; //type: Ds3Mib::Dsx3Configtable
        class Dsx3Currenttable; //type: Ds3Mib::Dsx3Currenttable
        class Dsx3Intervaltable; //type: Ds3Mib::Dsx3Intervaltable
        class Dsx3Totaltable; //type: Ds3Mib::Dsx3Totaltable
        class Dsx3Farendconfigtable; //type: Ds3Mib::Dsx3Farendconfigtable
        class Dsx3Farendcurrenttable; //type: Ds3Mib::Dsx3Farendcurrenttable
        class Dsx3Farendintervaltable; //type: Ds3Mib::Dsx3Farendintervaltable
        class Dsx3Farendtotaltable; //type: Ds3Mib::Dsx3Farendtotaltable
        class Dsx3Fractable; //type: Ds3Mib::Dsx3Fractable

        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Configtable> dsx3configtable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Currenttable> dsx3currenttable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendconfigtable> dsx3farendconfigtable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendcurrenttable> dsx3farendcurrenttable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendintervaltable> dsx3farendintervaltable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendtotaltable> dsx3farendtotaltable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Fractable> dsx3fractable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Intervaltable> dsx3intervaltable_;
        std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Totaltable> dsx3totaltable_;
        
}; // Ds3Mib


class Ds3Mib::Dsx3Configtable : public Entity
{
    public:
        Dsx3Configtable();
        ~Dsx3Configtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Configentry; //type: Ds3Mib::Dsx3Configtable::Dsx3Configentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Configtable::Dsx3Configentry> > dsx3configentry_;
        
}; // Ds3Mib::Dsx3Configtable


class Ds3Mib::Dsx3Configtable::Dsx3Configentry : public Entity
{
    public:
        Dsx3Configentry();
        ~Dsx3Configentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3lineindex; //type: int32
        YLeaf dsx3ifindex; //type: int32
        YLeaf dsx3timeelapsed; //type: int32
        YLeaf dsx3validintervals; //type: int32
        YLeaf dsx3linetype; //type: Dsx3LinetypeEnum
        YLeaf dsx3linecoding; //type: Dsx3LinecodingEnum
        YLeaf dsx3sendcode; //type: Dsx3SendcodeEnum
        YLeaf dsx3circuitidentifier; //type: string
        YLeaf dsx3loopbackconfig; //type: Dsx3LoopbackconfigEnum
        YLeaf dsx3linestatus; //type: int32
        YLeaf dsx3transmitclocksource; //type: Dsx3TransmitclocksourceEnum
        YLeaf dsx3invalidintervals; //type: int32
        YLeaf dsx3linelength; //type: int32
        YLeaf dsx3linestatuslastchange; //type: uint32
        YLeaf dsx3linestatuschangetrapenable; //type: Dsx3LinestatuschangetrapenableEnum
        YLeaf dsx3loopbackstatus; //type: int32
        YLeaf dsx3channelization; //type: Dsx3ChannelizationEnum
        YLeaf dsx3ds1forremoteloop; //type: int32
        class Dsx3LinetypeEnum;
        class Dsx3LinecodingEnum;
        class Dsx3SendcodeEnum;
        class Dsx3LoopbackconfigEnum;
        class Dsx3TransmitclocksourceEnum;
        class Dsx3LinestatuschangetrapenableEnum;
        class Dsx3ChannelizationEnum;

}; // Ds3Mib::Dsx3Configtable::Dsx3Configentry


class Ds3Mib::Dsx3Currenttable : public Entity
{
    public:
        Dsx3Currenttable();
        ~Dsx3Currenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Currententry; //type: Ds3Mib::Dsx3Currenttable::Dsx3Currententry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Currenttable::Dsx3Currententry> > dsx3currententry_;
        
}; // Ds3Mib::Dsx3Currenttable


class Ds3Mib::Dsx3Currenttable::Dsx3Currententry : public Entity
{
    public:
        Dsx3Currententry();
        ~Dsx3Currententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3currentindex; //type: int32
        YLeaf dsx3currentpess; //type: uint32
        YLeaf dsx3currentpsess; //type: uint32
        YLeaf dsx3currentsefss; //type: uint32
        YLeaf dsx3currentuass; //type: uint32
        YLeaf dsx3currentlcvs; //type: uint32
        YLeaf dsx3currentpcvs; //type: uint32
        YLeaf dsx3currentless; //type: uint32
        YLeaf dsx3currentccvs; //type: uint32
        YLeaf dsx3currentcess; //type: uint32
        YLeaf dsx3currentcsess; //type: uint32

}; // Ds3Mib::Dsx3Currenttable::Dsx3Currententry


class Ds3Mib::Dsx3Intervaltable : public Entity
{
    public:
        Dsx3Intervaltable();
        ~Dsx3Intervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Intervalentry; //type: Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry> > dsx3intervalentry_;
        
}; // Ds3Mib::Dsx3Intervaltable


class Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry : public Entity
{
    public:
        Dsx3Intervalentry();
        ~Dsx3Intervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3intervalindex; //type: int32
        YLeaf dsx3intervalnumber; //type: int32
        YLeaf dsx3intervalpess; //type: uint32
        YLeaf dsx3intervalpsess; //type: uint32
        YLeaf dsx3intervalsefss; //type: uint32
        YLeaf dsx3intervaluass; //type: uint32
        YLeaf dsx3intervallcvs; //type: uint32
        YLeaf dsx3intervalpcvs; //type: uint32
        YLeaf dsx3intervalless; //type: uint32
        YLeaf dsx3intervalccvs; //type: uint32
        YLeaf dsx3intervalcess; //type: uint32
        YLeaf dsx3intervalcsess; //type: uint32
        YLeaf dsx3intervalvaliddata; //type: boolean

}; // Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry


class Ds3Mib::Dsx3Totaltable : public Entity
{
    public:
        Dsx3Totaltable();
        ~Dsx3Totaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Totalentry; //type: Ds3Mib::Dsx3Totaltable::Dsx3Totalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Totaltable::Dsx3Totalentry> > dsx3totalentry_;
        
}; // Ds3Mib::Dsx3Totaltable


class Ds3Mib::Dsx3Totaltable::Dsx3Totalentry : public Entity
{
    public:
        Dsx3Totalentry();
        ~Dsx3Totalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3totalindex; //type: int32
        YLeaf dsx3totalpess; //type: uint32
        YLeaf dsx3totalpsess; //type: uint32
        YLeaf dsx3totalsefss; //type: uint32
        YLeaf dsx3totaluass; //type: uint32
        YLeaf dsx3totallcvs; //type: uint32
        YLeaf dsx3totalpcvs; //type: uint32
        YLeaf dsx3totalless; //type: uint32
        YLeaf dsx3totalccvs; //type: uint32
        YLeaf dsx3totalcess; //type: uint32
        YLeaf dsx3totalcsess; //type: uint32

}; // Ds3Mib::Dsx3Totaltable::Dsx3Totalentry


class Ds3Mib::Dsx3Farendconfigtable : public Entity
{
    public:
        Dsx3Farendconfigtable();
        ~Dsx3Farendconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Farendconfigentry; //type: Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry> > dsx3farendconfigentry_;
        
}; // Ds3Mib::Dsx3Farendconfigtable


class Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry : public Entity
{
    public:
        Dsx3Farendconfigentry();
        ~Dsx3Farendconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3farendlineindex; //type: int32
        YLeaf dsx3farendequipcode; //type: string
        YLeaf dsx3farendlocationidcode; //type: string
        YLeaf dsx3farendframeidcode; //type: string
        YLeaf dsx3farendunitcode; //type: string
        YLeaf dsx3farendfacilityidcode; //type: string

}; // Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry


class Ds3Mib::Dsx3Farendcurrenttable : public Entity
{
    public:
        Dsx3Farendcurrenttable();
        ~Dsx3Farendcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Farendcurrententry; //type: Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry> > dsx3farendcurrententry_;
        
}; // Ds3Mib::Dsx3Farendcurrenttable


class Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry : public Entity
{
    public:
        Dsx3Farendcurrententry();
        ~Dsx3Farendcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3farendcurrentindex; //type: int32
        YLeaf dsx3farendtimeelapsed; //type: int32
        YLeaf dsx3farendvalidintervals; //type: int32
        YLeaf dsx3farendcurrentcess; //type: uint32
        YLeaf dsx3farendcurrentcsess; //type: uint32
        YLeaf dsx3farendcurrentccvs; //type: uint32
        YLeaf dsx3farendcurrentuass; //type: uint32
        YLeaf dsx3farendinvalidintervals; //type: int32

}; // Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry


class Ds3Mib::Dsx3Farendintervaltable : public Entity
{
    public:
        Dsx3Farendintervaltable();
        ~Dsx3Farendintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Farendintervalentry; //type: Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry> > dsx3farendintervalentry_;
        
}; // Ds3Mib::Dsx3Farendintervaltable


class Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry : public Entity
{
    public:
        Dsx3Farendintervalentry();
        ~Dsx3Farendintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3farendintervalindex; //type: int32
        YLeaf dsx3farendintervalnumber; //type: int32
        YLeaf dsx3farendintervalcess; //type: uint32
        YLeaf dsx3farendintervalcsess; //type: uint32
        YLeaf dsx3farendintervalccvs; //type: uint32
        YLeaf dsx3farendintervaluass; //type: uint32
        YLeaf dsx3farendintervalvaliddata; //type: boolean

}; // Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry


class Ds3Mib::Dsx3Farendtotaltable : public Entity
{
    public:
        Dsx3Farendtotaltable();
        ~Dsx3Farendtotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Farendtotalentry; //type: Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry> > dsx3farendtotalentry_;
        
}; // Ds3Mib::Dsx3Farendtotaltable


class Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry : public Entity
{
    public:
        Dsx3Farendtotalentry();
        ~Dsx3Farendtotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3farendtotalindex; //type: int32
        YLeaf dsx3farendtotalcess; //type: uint32
        YLeaf dsx3farendtotalcsess; //type: uint32
        YLeaf dsx3farendtotalccvs; //type: uint32
        YLeaf dsx3farendtotaluass; //type: uint32

}; // Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry


class Ds3Mib::Dsx3Fractable : public Entity
{
    public:
        Dsx3Fractable();
        ~Dsx3Fractable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dsx3Fracentry; //type: Ds3Mib::Dsx3Fractable::Dsx3Fracentry

        std::vector<std::shared_ptr<DS3_MIB::Ds3Mib::Dsx3Fractable::Dsx3Fracentry> > dsx3fracentry_;
        
}; // Ds3Mib::Dsx3Fractable


class Ds3Mib::Dsx3Fractable::Dsx3Fracentry : public Entity
{
    public:
        Dsx3Fracentry();
        ~Dsx3Fracentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dsx3fracindex; //type: int32
        YLeaf dsx3fracnumber; //type: int32
        YLeaf dsx3fracifindex; //type: int32

}; // Ds3Mib::Dsx3Fractable::Dsx3Fracentry

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx3other;
        static const Enum::YLeaf dsx3M23;
        static const Enum::YLeaf dsx3SYNTRAN;
        static const Enum::YLeaf dsx3CbitParity;
        static const Enum::YLeaf dsx3ClearChannel;
        static const Enum::YLeaf e3other;
        static const Enum::YLeaf e3Framed;
        static const Enum::YLeaf e3Plcp;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinecodingEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx3Other;
        static const Enum::YLeaf dsx3B3ZS;
        static const Enum::YLeaf e3HDB3;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx3SendNoCode;
        static const Enum::YLeaf dsx3SendLineCode;
        static const Enum::YLeaf dsx3SendPayloadCode;
        static const Enum::YLeaf dsx3SendResetCode;
        static const Enum::YLeaf dsx3SendDS1LoopCode;
        static const Enum::YLeaf dsx3SendTestPattern;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf dsx3NoLoop;
        static const Enum::YLeaf dsx3PayloadLoop;
        static const Enum::YLeaf dsx3LineLoop;
        static const Enum::YLeaf dsx3OtherLoop;
        static const Enum::YLeaf dsx3InwardLoop;
        static const Enum::YLeaf dsx3DualLoop;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3TransmitclocksourceEnum : public Enum
{
    public:
        static const Enum::YLeaf loopTiming;
        static const Enum::YLeaf localTiming;
        static const Enum::YLeaf throughTiming;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinestatuschangetrapenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3ChannelizationEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabledDs1;
        static const Enum::YLeaf enabledDs2;

};


}
}

#endif /* _DS3_MIB_ */

