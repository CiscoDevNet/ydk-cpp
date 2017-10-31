#ifndef _ETHERLIKE_MIB_
#define _ETHERLIKE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace EtherLike_MIB {

class Dot3Testtdr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3Testtdr();
        ~Dot3Testtdr();


}; // Dot3Testtdr

class Dot3Testloopback : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3Testloopback();
        ~Dot3Testloopback();


}; // Dot3Testloopback

class Dot3Erroriniterror : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3Erroriniterror();
        ~Dot3Erroriniterror();


}; // Dot3Erroriniterror

class Dot3Errorloopbackerror : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3Errorloopbackerror();
        ~Dot3Errorloopbackerror();


}; // Dot3Errorloopbackerror

class EtherLikeMIB : public ydk::Entity
{
    public:
        EtherLikeMIB();
        ~EtherLikeMIB();

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

        class Dot3Statstable; //type: EtherLikeMIB::Dot3Statstable
        class Dot3Colltable; //type: EtherLikeMIB::Dot3Colltable
        class Dot3Controltable; //type: EtherLikeMIB::Dot3Controltable
        class Dot3Pausetable; //type: EtherLikeMIB::Dot3Pausetable
        class Dot3Hcstatstable; //type: EtherLikeMIB::Dot3Hcstatstable

        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Statstable> dot3statstable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Colltable> dot3colltable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Controltable> dot3controltable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Pausetable> dot3pausetable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Hcstatstable> dot3hcstatstable;
        
}; // EtherLikeMIB


class EtherLikeMIB::Dot3Statstable : public ydk::Entity
{
    public:
        Dot3Statstable();
        ~Dot3Statstable();

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

        class Dot3Statsentry; //type: EtherLikeMIB::Dot3Statstable::Dot3Statsentry

        std::vector<std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Statstable::Dot3Statsentry> > dot3statsentry;
        
}; // EtherLikeMIB::Dot3Statstable


class EtherLikeMIB::Dot3Statstable::Dot3Statsentry : public ydk::Entity
{
    public:
        Dot3Statsentry();
        ~Dot3Statsentry();

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

        ydk::YLeaf dot3statsindex; //type: int32
        ydk::YLeaf dot3statsalignmenterrors; //type: uint32
        ydk::YLeaf dot3statsfcserrors; //type: uint32
        ydk::YLeaf dot3statssinglecollisionframes; //type: uint32
        ydk::YLeaf dot3statsmultiplecollisionframes; //type: uint32
        ydk::YLeaf dot3statssqetesterrors; //type: uint32
        ydk::YLeaf dot3statsdeferredtransmissions; //type: uint32
        ydk::YLeaf dot3statslatecollisions; //type: uint32
        ydk::YLeaf dot3statsexcessivecollisions; //type: uint32
        ydk::YLeaf dot3statsinternalmactransmiterrors; //type: uint32
        ydk::YLeaf dot3statscarriersenseerrors; //type: uint32
        ydk::YLeaf dot3statsframetoolongs; //type: uint32
        ydk::YLeaf dot3statsinternalmacreceiveerrors; //type: uint32
        ydk::YLeaf dot3statsetherchipset; //type: string
        ydk::YLeaf dot3statssymbolerrors; //type: uint32
        ydk::YLeaf dot3statsduplexstatus; //type: Dot3Statsduplexstatus
        ydk::YLeaf dot3statsratecontrolability; //type: boolean
        ydk::YLeaf dot3statsratecontrolstatus; //type: Dot3Statsratecontrolstatus
        class Dot3Statsduplexstatus;
        class Dot3Statsratecontrolstatus;

}; // EtherLikeMIB::Dot3Statstable::Dot3Statsentry


class EtherLikeMIB::Dot3Colltable : public ydk::Entity
{
    public:
        Dot3Colltable();
        ~Dot3Colltable();

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

        class Dot3Collentry; //type: EtherLikeMIB::Dot3Colltable::Dot3Collentry

        std::vector<std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Colltable::Dot3Collentry> > dot3collentry;
        
}; // EtherLikeMIB::Dot3Colltable


class EtherLikeMIB::Dot3Colltable::Dot3Collentry : public ydk::Entity
{
    public:
        Dot3Collentry();
        ~Dot3Collentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf dot3collcount; //type: int32
        ydk::YLeaf dot3collfrequencies; //type: uint32

}; // EtherLikeMIB::Dot3Colltable::Dot3Collentry


class EtherLikeMIB::Dot3Controltable : public ydk::Entity
{
    public:
        Dot3Controltable();
        ~Dot3Controltable();

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

        class Dot3Controlentry; //type: EtherLikeMIB::Dot3Controltable::Dot3Controlentry

        std::vector<std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Controltable::Dot3Controlentry> > dot3controlentry;
        
}; // EtherLikeMIB::Dot3Controltable


class EtherLikeMIB::Dot3Controltable::Dot3Controlentry : public ydk::Entity
{
    public:
        Dot3Controlentry();
        ~Dot3Controlentry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3controlfunctionssupported; //type: Dot3Controlfunctionssupported
        ydk::YLeaf dot3controlinunknownopcodes; //type: uint32
        ydk::YLeaf dot3hccontrolinunknownopcodes; //type: uint64

}; // EtherLikeMIB::Dot3Controltable::Dot3Controlentry


class EtherLikeMIB::Dot3Pausetable : public ydk::Entity
{
    public:
        Dot3Pausetable();
        ~Dot3Pausetable();

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

        class Dot3Pauseentry; //type: EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry

        std::vector<std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry> > dot3pauseentry;
        
}; // EtherLikeMIB::Dot3Pausetable


class EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry : public ydk::Entity
{
    public:
        Dot3Pauseentry();
        ~Dot3Pauseentry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3pauseadminmode; //type: Dot3Pauseadminmode
        ydk::YLeaf dot3pauseopermode; //type: Dot3Pauseopermode
        ydk::YLeaf dot3inpauseframes; //type: uint32
        ydk::YLeaf dot3outpauseframes; //type: uint32
        ydk::YLeaf dot3hcinpauseframes; //type: uint64
        ydk::YLeaf dot3hcoutpauseframes; //type: uint64
        class Dot3Pauseadminmode;
        class Dot3Pauseopermode;

}; // EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry


class EtherLikeMIB::Dot3Hcstatstable : public ydk::Entity
{
    public:
        Dot3Hcstatstable();
        ~Dot3Hcstatstable();

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

        class Dot3Hcstatsentry; //type: EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry> > dot3hcstatsentry;
        
}; // EtherLikeMIB::Dot3Hcstatstable


class EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry : public ydk::Entity
{
    public:
        Dot3Hcstatsentry();
        ~Dot3Hcstatsentry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3hcstatsalignmenterrors; //type: uint64
        ydk::YLeaf dot3hcstatsfcserrors; //type: uint64
        ydk::YLeaf dot3hcstatsinternalmactransmiterrors; //type: uint64
        ydk::YLeaf dot3hcstatsframetoolongs; //type: uint64
        ydk::YLeaf dot3hcstatsinternalmacreceiveerrors; //type: uint64
        ydk::YLeaf dot3hcstatssymbolerrors; //type: uint64

}; // EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry

class EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsduplexstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf halfDuplex;
        static const ydk::Enum::YLeaf fullDuplex;

};

class EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsratecontrolstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rateControlOff;
        static const ydk::Enum::YLeaf rateControlOn;
        static const ydk::Enum::YLeaf unknown;

};

class EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseadminmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledXmit;
        static const ydk::Enum::YLeaf enabledRcv;
        static const ydk::Enum::YLeaf enabledXmitAndRcv;

};

class EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledXmit;
        static const ydk::Enum::YLeaf enabledRcv;
        static const ydk::Enum::YLeaf enabledXmitAndRcv;

};


}
}

#endif /* _ETHERLIKE_MIB_ */

