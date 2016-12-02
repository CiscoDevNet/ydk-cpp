
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_es_acl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_es_acl_oper {

EsAcl::Active::Oor::AclSummary::Details::Details()
    :
    	current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 maximum_configurable_ac_es{YType::uint32, "maximum-configurable-ac-es"},
	 maximum_configurable_ac_ls{YType::uint32, "maximum-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "acl-summary";
}

EsAcl::Active::Oor::AclSummary::Details::~Details()
{
}

bool EsAcl::Active::Oor::AclSummary::Details::has_data() const
{
    return current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| maximum_configurable_ac_es.is_set
	|| maximum_configurable_ac_ls.is_set;
}

bool EsAcl::Active::Oor::AclSummary::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(maximum_configurable_ac_es.operation)
	|| is_set(maximum_configurable_ac_ls.operation);
}

std::string EsAcl::Active::Oor::AclSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath EsAcl::Active::Oor::AclSummary::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor/acl-summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (maximum_configurable_ac_es.is_set || is_set(maximum_configurable_ac_es.operation)) leaf_name_data.push_back(maximum_configurable_ac_es.get_name_leafdata());
    if (maximum_configurable_ac_ls.is_set || is_set(maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::Oor::AclSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::Oor::AclSummary::Details::get_children()
{
    return children;
}

void EsAcl::Active::Oor::AclSummary::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es = value;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls = value;
    }
}

EsAcl::Active::Oor::AclSummary::AclSummary()
    :
    details(std::make_unique<EsAcl::Active::Oor::AclSummary::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "acl-summary"; yang_parent_name = "oor";
}

EsAcl::Active::Oor::AclSummary::~AclSummary()
{
}

bool EsAcl::Active::Oor::AclSummary::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool EsAcl::Active::Oor::AclSummary::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string EsAcl::Active::Oor::AclSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-summary";

    return path_buffer.str();

}

EntityPath EsAcl::Active::Oor::AclSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::Oor::AclSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<EsAcl::Active::Oor::AclSummary::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::Oor::AclSummary::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void EsAcl::Active::Oor::AclSummary::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::Oor::Oor()
    :
    acl_summary(std::make_unique<EsAcl::Active::Oor::AclSummary>())
{
    acl_summary->parent = this;
    children["acl-summary"] = acl_summary.get();

    yang_name = "oor"; yang_parent_name = "active";
}

EsAcl::Active::Oor::~Oor()
{
}

bool EsAcl::Active::Oor::has_data() const
{
    return (acl_summary !=  nullptr && acl_summary->has_data());
}

bool EsAcl::Active::Oor::has_operation() const
{
    return is_set(operation)
	|| (acl_summary !=  nullptr && is_set(acl_summary->operation));
}

std::string EsAcl::Active::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath EsAcl::Active::Oor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-summary")
    {
        if(acl_summary != nullptr)
        {
            children["acl-summary"] = acl_summary.get();
        }
        else
        {
            acl_summary = std::make_unique<EsAcl::Active::Oor::AclSummary>();
            acl_summary->parent = this;
            children["acl-summary"] = acl_summary.get();
        }
        return children.at("acl-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::Oor::get_children()
{
    if(children.find("acl-summary") == children.end())
    {
        if(acl_summary != nullptr)
        {
            children["acl-summary"] = acl_summary.get();
        }
    }

    return children;
}

void EsAcl::Active::Oor::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::AclSequenceNumber()
    :
    	sequence_number{YType::uint32, "sequence-number"},
	 ace_sequence_number{YType::uint32, "ace-sequence-number"},
	 ace_type{YType::enumeration, "ace-type"},
	 acl_name{YType::str, "acl-name"},
	 capture{YType::boolean, "capture"},
	 cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 destination_address{YType::str, "destination-address"},
	 destination_wild_card_bits{YType::str, "destination-wild-card-bits"},
	 ether_type_number{YType::uint16, "ether-type-number"},
	 grant{YType::enumeration, "grant"},
	 hits{YType::uint64, "hits"},
	 inner_header_cos{YType::uint8, "inner-header-cos"},
	 inner_header_dei{YType::uint8, "inner-header-dei"},
	 inner_header_vlan1{YType::uint16, "inner-header-vlan1"},
	 inner_header_vlan2{YType::uint16, "inner-header-vlan2"},
	 log_option{YType::uint8, "log-option"},
	 remark{YType::str, "remark"},
	 sequence_string{YType::str, "sequence-string"},
	 source_address{YType::str, "source-address"},
	 source_wild_card_bits{YType::str, "source-wild-card-bits"},
	 vlan1{YType::uint16, "vlan1"},
	 vlan2{YType::uint16, "vlan2"}
{
    yang_name = "acl-sequence-number"; yang_parent_name = "acl-sequence-numbers";
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::~AclSequenceNumber()
{
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::has_data() const
{
    return sequence_number.is_set
	|| ace_sequence_number.is_set
	|| ace_type.is_set
	|| acl_name.is_set
	|| capture.is_set
	|| cos.is_set
	|| dei.is_set
	|| destination_address.is_set
	|| destination_wild_card_bits.is_set
	|| ether_type_number.is_set
	|| grant.is_set
	|| hits.is_set
	|| inner_header_cos.is_set
	|| inner_header_dei.is_set
	|| inner_header_vlan1.is_set
	|| inner_header_vlan2.is_set
	|| log_option.is_set
	|| remark.is_set
	|| sequence_string.is_set
	|| source_address.is_set
	|| source_wild_card_bits.is_set
	|| vlan1.is_set
	|| vlan2.is_set;
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(ace_sequence_number.operation)
	|| is_set(ace_type.operation)
	|| is_set(acl_name.operation)
	|| is_set(capture.operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_wild_card_bits.operation)
	|| is_set(ether_type_number.operation)
	|| is_set(grant.operation)
	|| is_set(hits.operation)
	|| is_set(inner_header_cos.operation)
	|| is_set(inner_header_dei.operation)
	|| is_set(inner_header_vlan1.operation)
	|| is_set(inner_header_vlan2.operation)
	|| is_set(log_option.operation)
	|| is_set(remark.operation)
	|| is_set(sequence_string.operation)
	|| is_set(source_address.operation)
	|| is_set(source_wild_card_bits.operation)
	|| is_set(vlan1.operation)
	|| is_set(vlan2.operation);
}

std::string EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sequence-number" <<"[sequence-number='" <<sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (ace_sequence_number.is_set || is_set(ace_sequence_number.operation)) leaf_name_data.push_back(ace_sequence_number.get_name_leafdata());
    if (ace_type.is_set || is_set(ace_type.operation)) leaf_name_data.push_back(ace_type.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (capture.is_set || is_set(capture.operation)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.operation)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());
    if (ether_type_number.is_set || is_set(ether_type_number.operation)) leaf_name_data.push_back(ether_type_number.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (inner_header_cos.is_set || is_set(inner_header_cos.operation)) leaf_name_data.push_back(inner_header_cos.get_name_leafdata());
    if (inner_header_dei.is_set || is_set(inner_header_dei.operation)) leaf_name_data.push_back(inner_header_dei.get_name_leafdata());
    if (inner_header_vlan1.is_set || is_set(inner_header_vlan1.operation)) leaf_name_data.push_back(inner_header_vlan1.get_name_leafdata());
    if (inner_header_vlan2.is_set || is_set(inner_header_vlan2.operation)) leaf_name_data.push_back(inner_header_vlan2.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.operation)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence_string.is_set || is_set(sequence_string.operation)) leaf_name_data.push_back(sequence_string.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.operation)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());
    if (vlan1.is_set || is_set(vlan1.operation)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (vlan2.is_set || is_set(vlan2.operation)) leaf_name_data.push_back(vlan2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::get_children()
{
    return children;
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "ace-sequence-number")
    {
        ace_sequence_number = value;
    }
    if(value_path == "ace-type")
    {
        ace_type = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "capture")
    {
        capture = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "inner-header-cos")
    {
        inner_header_cos = value;
    }
    if(value_path == "inner-header-dei")
    {
        inner_header_dei = value;
    }
    if(value_path == "inner-header-vlan1")
    {
        inner_header_vlan1 = value;
    }
    if(value_path == "inner-header-vlan2")
    {
        inner_header_vlan2 = value;
    }
    if(value_path == "log-option")
    {
        log_option = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "sequence-string")
    {
        sequence_string = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
    }
    if(value_path == "vlan1")
    {
        vlan1 = value;
    }
    if(value_path == "vlan2")
    {
        vlan2 = value;
    }
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumbers()
{
    yang_name = "acl-sequence-numbers"; yang_parent_name = "acl";
}

EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::~AclSequenceNumbers()
{
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::has_data() const
{
    for (std::size_t index=0; index<acl_sequence_number.size(); index++)
    {
        if(acl_sequence_number[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::has_operation() const
{
    for (std::size_t index=0; index<acl_sequence_number.size(); index++)
    {
        if(acl_sequence_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sequence-numbers";

    return path_buffer.str();

}

EntityPath EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-sequence-number")
    {
        for(auto const & c : acl_sequence_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber>();
        c->parent = this;
        acl_sequence_number.push_back(std::move(c));
        children[segment_path] = acl_sequence_number.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::get_children()
{
    for (auto const & c : acl_sequence_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::List::Acls::Acl::Acl()
    :
    	name{YType::str, "name"}
    	,
    acl_sequence_numbers(std::make_unique<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers>())
{
    acl_sequence_numbers->parent = this;
    children["acl-sequence-numbers"] = acl_sequence_numbers.get();

    yang_name = "acl"; yang_parent_name = "acls";
}

EsAcl::Active::List::Acls::Acl::~Acl()
{
}

bool EsAcl::Active::List::Acls::Acl::has_data() const
{
    return name.is_set
	|| (acl_sequence_numbers !=  nullptr && acl_sequence_numbers->has_data());
}

bool EsAcl::Active::List::Acls::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (acl_sequence_numbers !=  nullptr && is_set(acl_sequence_numbers->operation));
}

std::string EsAcl::Active::List::Acls::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath EsAcl::Active::List::Acls::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/list/acls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::List::Acls::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl-sequence-numbers")
    {
        if(acl_sequence_numbers != nullptr)
        {
            children["acl-sequence-numbers"] = acl_sequence_numbers.get();
        }
        else
        {
            acl_sequence_numbers = std::make_unique<EsAcl::Active::List::Acls::Acl::AclSequenceNumbers>();
            acl_sequence_numbers->parent = this;
            children["acl-sequence-numbers"] = acl_sequence_numbers.get();
        }
        return children.at("acl-sequence-numbers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::List::Acls::Acl::get_children()
{
    if(children.find("acl-sequence-numbers") == children.end())
    {
        if(acl_sequence_numbers != nullptr)
        {
            children["acl-sequence-numbers"] = acl_sequence_numbers.get();
        }
    }

    return children;
}

void EsAcl::Active::List::Acls::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

EsAcl::Active::List::Acls::Acls()
{
    yang_name = "acls"; yang_parent_name = "list";
}

EsAcl::Active::List::Acls::~Acls()
{
}

bool EsAcl::Active::List::Acls::has_data() const
{
    for (std::size_t index=0; index<acl.size(); index++)
    {
        if(acl[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::List::Acls::has_operation() const
{
    for (std::size_t index=0; index<acl.size(); index++)
    {
        if(acl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Active::List::Acls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acls";

    return path_buffer.str();

}

EntityPath EsAcl::Active::List::Acls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::List::Acls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl")
    {
        for(auto const & c : acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EsAcl::Active::List::Acls::Acl>();
        c->parent = this;
        acl.push_back(std::move(c));
        children[segment_path] = acl.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::List::Acls::get_children()
{
    for (auto const & c : acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EsAcl::Active::List::Acls::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::List::List()
    :
    acls(std::make_unique<EsAcl::Active::List::Acls>())
{
    acls->parent = this;
    children["acls"] = acls.get();

    yang_name = "list"; yang_parent_name = "active";
}

EsAcl::Active::List::~List()
{
}

bool EsAcl::Active::List::has_data() const
{
    return (acls !=  nullptr && acls->has_data());
}

bool EsAcl::Active::List::has_operation() const
{
    return is_set(operation)
	|| (acls !=  nullptr && is_set(acls->operation));
}

std::string EsAcl::Active::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

EntityPath EsAcl::Active::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acls")
    {
        if(acls != nullptr)
        {
            children["acls"] = acls.get();
        }
        else
        {
            acls = std::make_unique<EsAcl::Active::List::Acls>();
            acls->parent = this;
            children["acls"] = acls.get();
        }
        return children.at("acls");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::List::get_children()
{
    if(children.find("acls") == children.end())
    {
        if(acls != nullptr)
        {
            children["acls"] = acls.get();
        }
    }

    return children;
}

void EsAcl::Active::List::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::OorAcls::OorAcl::OorAcl()
    :
    	name{YType::str, "name"},
	 current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 maximum_configurable_ac_es{YType::uint32, "maximum-configurable-ac-es"},
	 maximum_configurable_ac_ls{YType::uint32, "maximum-configurable-ac-ls"}
{
    yang_name = "oor-acl"; yang_parent_name = "oor-acls";
}

EsAcl::Active::OorAcls::OorAcl::~OorAcl()
{
}

bool EsAcl::Active::OorAcls::OorAcl::has_data() const
{
    return name.is_set
	|| current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| maximum_configurable_ac_es.is_set
	|| maximum_configurable_ac_ls.is_set;
}

bool EsAcl::Active::OorAcls::OorAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(maximum_configurable_ac_es.operation)
	|| is_set(maximum_configurable_ac_ls.operation);
}

std::string EsAcl::Active::OorAcls::OorAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-acl" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath EsAcl::Active::OorAcls::OorAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/oor-acls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (maximum_configurable_ac_es.is_set || is_set(maximum_configurable_ac_es.operation)) leaf_name_data.push_back(maximum_configurable_ac_es.get_name_leafdata());
    if (maximum_configurable_ac_ls.is_set || is_set(maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::OorAcls::OorAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::OorAcls::OorAcl::get_children()
{
    return children;
}

void EsAcl::Active::OorAcls::OorAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "maximum-configurable-ac-es")
    {
        maximum_configurable_ac_es = value;
    }
    if(value_path == "maximum-configurable-ac-ls")
    {
        maximum_configurable_ac_ls = value;
    }
}

EsAcl::Active::OorAcls::OorAcls()
{
    yang_name = "oor-acls"; yang_parent_name = "active";
}

EsAcl::Active::OorAcls::~OorAcls()
{
}

bool EsAcl::Active::OorAcls::has_data() const
{
    for (std::size_t index=0; index<oor_acl.size(); index++)
    {
        if(oor_acl[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::OorAcls::has_operation() const
{
    for (std::size_t index=0; index<oor_acl.size(); index++)
    {
        if(oor_acl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Active::OorAcls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-acls";

    return path_buffer.str();

}

EntityPath EsAcl::Active::OorAcls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::OorAcls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oor-acl")
    {
        for(auto const & c : oor_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EsAcl::Active::OorAcls::OorAcl>();
        c->parent = this;
        oor_acl.push_back(std::move(c));
        children[segment_path] = oor_acl.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::OorAcls::get_children()
{
    for (auto const & c : oor_acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EsAcl::Active::OorAcls::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::Usages::Usage::Usage()
    :
    	application_id{YType::enumeration, "application-id"},
	 location{YType::str, "location"},
	 name{YType::str, "name"},
	 usage_details{YType::str, "usage-details"}
{
    yang_name = "usage"; yang_parent_name = "usages";
}

EsAcl::Active::Usages::Usage::~Usage()
{
}

bool EsAcl::Active::Usages::Usage::has_data() const
{
    return application_id.is_set
	|| location.is_set
	|| name.is_set
	|| usage_details.is_set;
}

bool EsAcl::Active::Usages::Usage::has_operation() const
{
    return is_set(operation)
	|| is_set(application_id.operation)
	|| is_set(location.operation)
	|| is_set(name.operation)
	|| is_set(usage_details.operation);
}

std::string EsAcl::Active::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";

    return path_buffer.str();

}

EntityPath EsAcl::Active::Usages::Usage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/usages/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_id.is_set || is_set(application_id.operation)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.operation)) leaf_name_data.push_back(usage_details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::Usages::Usage::get_children()
{
    return children;
}

void EsAcl::Active::Usages::Usage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-id")
    {
        application_id = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "usage-details")
    {
        usage_details = value;
    }
}

EsAcl::Active::Usages::Usages()
{
    yang_name = "usages"; yang_parent_name = "active";
}

EsAcl::Active::Usages::~Usages()
{
}

bool EsAcl::Active::Usages::has_data() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Active::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Active::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";

    return path_buffer.str();

}

EntityPath EsAcl::Active::Usages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usage")
    {
        for(auto const & c : usage)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EsAcl::Active::Usages::Usage>();
        c->parent = this;
        usage.push_back(std::move(c));
        children[segment_path] = usage.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::Usages::get_children()
{
    for (auto const & c : usage)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EsAcl::Active::Usages::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Active::Active()
    :
    list(std::make_unique<EsAcl::Active::List>())
	,oor(std::make_unique<EsAcl::Active::Oor>())
	,oor_acls(std::make_unique<EsAcl::Active::OorAcls>())
	,usages(std::make_unique<EsAcl::Active::Usages>())
{
    list->parent = this;
    children["list"] = list.get();

    oor->parent = this;
    children["oor"] = oor.get();

    oor_acls->parent = this;
    children["oor-acls"] = oor_acls.get();

    usages->parent = this;
    children["usages"] = usages.get();

    yang_name = "active"; yang_parent_name = "es-acl";
}

EsAcl::Active::~Active()
{
}

bool EsAcl::Active::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (oor !=  nullptr && oor->has_data())
	|| (oor_acls !=  nullptr && oor_acls->has_data())
	|| (usages !=  nullptr && usages->has_data());
}

bool EsAcl::Active::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && is_set(list->operation))
	|| (oor !=  nullptr && is_set(oor->operation))
	|| (oor_acls !=  nullptr && is_set(oor_acls->operation))
	|| (usages !=  nullptr && is_set(usages->operation));
}

std::string EsAcl::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath EsAcl::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "list")
    {
        if(list != nullptr)
        {
            children["list"] = list.get();
        }
        else
        {
            list = std::make_unique<EsAcl::Active::List>();
            list->parent = this;
            children["list"] = list.get();
        }
        return children.at("list");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<EsAcl::Active::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    if(child_yang_name == "oor-acls")
    {
        if(oor_acls != nullptr)
        {
            children["oor-acls"] = oor_acls.get();
        }
        else
        {
            oor_acls = std::make_unique<EsAcl::Active::OorAcls>();
            oor_acls->parent = this;
            children["oor-acls"] = oor_acls.get();
        }
        return children.at("oor-acls");
    }

    if(child_yang_name == "usages")
    {
        if(usages != nullptr)
        {
            children["usages"] = usages.get();
        }
        else
        {
            usages = std::make_unique<EsAcl::Active::Usages>();
            usages->parent = this;
            children["usages"] = usages.get();
        }
        return children.at("usages");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::Active::get_children()
{
    if(children.find("list") == children.end())
    {
        if(list != nullptr)
        {
            children["list"] = list.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    if(children.find("oor-acls") == children.end())
    {
        if(oor_acls != nullptr)
        {
            children["oor-acls"] = oor_acls.get();
        }
    }

    if(children.find("usages") == children.end())
    {
        if(usages != nullptr)
        {
            children["usages"] = usages.get();
        }
    }

    return children;
}

void EsAcl::Active::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::EsAcl()
    :
    active(std::make_unique<EsAcl::Active>())
{
    active->parent = this;
    children["active"] = active.get();

    yang_name = "es-acl"; yang_parent_name = "Cisco-IOS-XR-es-acl-oper";
}

EsAcl::~EsAcl()
{
}

bool EsAcl::has_data() const
{
    return (active !=  nullptr && active->has_data());
}

bool EsAcl::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && is_set(active->operation));
}

std::string EsAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-oper:es-acl";

    return path_buffer.str();

}

EntityPath EsAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EsAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
        else
        {
            active = std::make_unique<EsAcl::Active>();
            active->parent = this;
            children["active"] = active.get();
        }
        return children.at("active");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EsAcl::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
    }

    return children;
}

void EsAcl::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> EsAcl::clone_ptr()
{
    return std::make_unique<EsAcl>();
}

const Enum::Value AclActionEnum::deny {0, "deny"};
const Enum::Value AclActionEnum::permit {1, "permit"};
const Enum::Value AclActionEnum::encrypt {2, "encrypt"};
const Enum::Value AclActionEnum::bypass {3, "bypass"};
const Enum::Value AclActionEnum::fallthrough {4, "fallthrough"};
const Enum::Value AclActionEnum::invalid {5, "invalid"};

const Enum::Value AclAce1Enum::normal {0, "normal"};
const Enum::Value AclAce1Enum::remark {1, "remark"};
const Enum::Value AclAce1Enum::abf {2, "abf"};


}
}

