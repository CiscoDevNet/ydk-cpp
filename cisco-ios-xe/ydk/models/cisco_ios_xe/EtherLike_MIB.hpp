#ifndef _ETHERLIKE_MIB_
#define _ETHERLIKE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace EtherLike_MIB {

class Dot3ErroriniterrorIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot3ErroriniterrorIdentity();
        ~Dot3ErroriniterrorIdentity();


}; // Dot3ErroriniterrorIdentity

class Dot3TesttdrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot3TesttdrIdentity();
        ~Dot3TesttdrIdentity();


}; // Dot3TesttdrIdentity

class Dot3ErrorloopbackerrorIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot3ErrorloopbackerrorIdentity();
        ~Dot3ErrorloopbackerrorIdentity();


}; // Dot3ErrorloopbackerrorIdentity

class Dot3TestloopbackIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot3TestloopbackIdentity();
        ~Dot3TestloopbackIdentity();


}; // Dot3TestloopbackIdentity

class EtherlikeMib : public Entity
{
    public:
        EtherlikeMib();
        ~EtherlikeMib();

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

        class Dot3Statstable; //type: EtherlikeMib::Dot3Statstable
        class Dot3Colltable; //type: EtherlikeMib::Dot3Colltable
        class Dot3Controltable; //type: EtherlikeMib::Dot3Controltable
        class Dot3Pausetable; //type: EtherlikeMib::Dot3Pausetable
        class Dot3Hcstatstable; //type: EtherlikeMib::Dot3Hcstatstable

        std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Colltable> dot3colltable;
        std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Controltable> dot3controltable;
        std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Hcstatstable> dot3hcstatstable;
        std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Pausetable> dot3pausetable;
        std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Statstable> dot3statstable;
        
}; // EtherlikeMib


class EtherlikeMib::Dot3Statstable : public Entity
{
    public:
        Dot3Statstable();
        ~Dot3Statstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot3Statsentry; //type: EtherlikeMib::Dot3Statstable::Dot3Statsentry

        std::vector<std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Statstable::Dot3Statsentry> > dot3statsentry;
        
}; // EtherlikeMib::Dot3Statstable


class EtherlikeMib::Dot3Statstable::Dot3Statsentry : public Entity
{
    public:
        Dot3Statsentry();
        ~Dot3Statsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot3statsindex; //type: int32
        YLeaf dot3statsalignmenterrors; //type: uint32
        YLeaf dot3statsfcserrors; //type: uint32
        YLeaf dot3statssinglecollisionframes; //type: uint32
        YLeaf dot3statsmultiplecollisionframes; //type: uint32
        YLeaf dot3statssqetesterrors; //type: uint32
        YLeaf dot3statsdeferredtransmissions; //type: uint32
        YLeaf dot3statslatecollisions; //type: uint32
        YLeaf dot3statsexcessivecollisions; //type: uint32
        YLeaf dot3statsinternalmactransmiterrors; //type: uint32
        YLeaf dot3statscarriersenseerrors; //type: uint32
        YLeaf dot3statsframetoolongs; //type: uint32
        YLeaf dot3statsinternalmacreceiveerrors; //type: uint32
        YLeaf dot3statsetherchipset; //type: string
        YLeaf dot3statssymbolerrors; //type: uint32
        YLeaf dot3statsduplexstatus; //type: Dot3StatsduplexstatusEnum
        YLeaf dot3statsratecontrolability; //type: boolean
        YLeaf dot3statsratecontrolstatus; //type: Dot3StatsratecontrolstatusEnum
        class Dot3StatsduplexstatusEnum;
        class Dot3StatsratecontrolstatusEnum;

}; // EtherlikeMib::Dot3Statstable::Dot3Statsentry


class EtherlikeMib::Dot3Colltable : public Entity
{
    public:
        Dot3Colltable();
        ~Dot3Colltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot3Collentry; //type: EtherlikeMib::Dot3Colltable::Dot3Collentry

        std::vector<std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Colltable::Dot3Collentry> > dot3collentry;
        
}; // EtherlikeMib::Dot3Colltable


class EtherlikeMib::Dot3Colltable::Dot3Collentry : public Entity
{
    public:
        Dot3Collentry();
        ~Dot3Collentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf dot3collcount; //type: int32
        YLeaf dot3collfrequencies; //type: uint32

}; // EtherlikeMib::Dot3Colltable::Dot3Collentry


class EtherlikeMib::Dot3Controltable : public Entity
{
    public:
        Dot3Controltable();
        ~Dot3Controltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot3Controlentry; //type: EtherlikeMib::Dot3Controltable::Dot3Controlentry

        std::vector<std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Controltable::Dot3Controlentry> > dot3controlentry;
        
}; // EtherlikeMib::Dot3Controltable


class EtherlikeMib::Dot3Controltable::Dot3Controlentry : public Entity
{
    public:
        Dot3Controlentry();
        ~Dot3Controlentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to EtherLike_MIB::EtherlikeMib::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        YLeaf dot3statsindex;
        YLeaf dot3controlfunctionssupported; //type: Dot3Controlfunctionssupported
        YLeaf dot3controlinunknownopcodes; //type: uint32
        YLeaf dot3hccontrolinunknownopcodes; //type: uint64

}; // EtherlikeMib::Dot3Controltable::Dot3Controlentry


class EtherlikeMib::Dot3Pausetable : public Entity
{
    public:
        Dot3Pausetable();
        ~Dot3Pausetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot3Pauseentry; //type: EtherlikeMib::Dot3Pausetable::Dot3Pauseentry

        std::vector<std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Pausetable::Dot3Pauseentry> > dot3pauseentry;
        
}; // EtherlikeMib::Dot3Pausetable


class EtherlikeMib::Dot3Pausetable::Dot3Pauseentry : public Entity
{
    public:
        Dot3Pauseentry();
        ~Dot3Pauseentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to EtherLike_MIB::EtherlikeMib::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        YLeaf dot3statsindex;
        YLeaf dot3pauseadminmode; //type: Dot3PauseadminmodeEnum
        YLeaf dot3pauseopermode; //type: Dot3PauseopermodeEnum
        YLeaf dot3inpauseframes; //type: uint32
        YLeaf dot3outpauseframes; //type: uint32
        YLeaf dot3hcinpauseframes; //type: uint64
        YLeaf dot3hcoutpauseframes; //type: uint64
        class Dot3PauseadminmodeEnum;
        class Dot3PauseopermodeEnum;

}; // EtherlikeMib::Dot3Pausetable::Dot3Pauseentry


class EtherlikeMib::Dot3Hcstatstable : public Entity
{
    public:
        Dot3Hcstatstable();
        ~Dot3Hcstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot3Hcstatsentry; //type: EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry

        std::vector<std::shared_ptr<EtherLike_MIB::EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry> > dot3hcstatsentry;
        
}; // EtherlikeMib::Dot3Hcstatstable


class EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry : public Entity
{
    public:
        Dot3Hcstatsentry();
        ~Dot3Hcstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to EtherLike_MIB::EtherlikeMib::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        YLeaf dot3statsindex;
        YLeaf dot3hcstatsalignmenterrors; //type: uint64
        YLeaf dot3hcstatsfcserrors; //type: uint64
        YLeaf dot3hcstatsinternalmactransmiterrors; //type: uint64
        YLeaf dot3hcstatsframetoolongs; //type: uint64
        YLeaf dot3hcstatsinternalmacreceiveerrors; //type: uint64
        YLeaf dot3hcstatssymbolerrors; //type: uint64

}; // EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry

class EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsduplexstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf halfDuplex;
        static const Enum::YLeaf fullDuplex;

};

class EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsratecontrolstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf rateControlOff;
        static const Enum::YLeaf rateControlOn;
        static const Enum::YLeaf unknown;

};

class EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseadminmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabledXmit;
        static const Enum::YLeaf enabledRcv;
        static const Enum::YLeaf enabledXmitAndRcv;

};

class EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseopermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabledXmit;
        static const Enum::YLeaf enabledRcv;
        static const Enum::YLeaf enabledXmitAndRcv;

};


}
}

#endif /* _ETHERLIKE_MIB_ */

