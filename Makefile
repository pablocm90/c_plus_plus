.PHONY: clean All

All:
	@echo "----------Building project:[ FirstChallenge - Debug ]----------"
	@cd "FirstChallenge" && "$(MAKE)" -f  "FirstChallenge.mk"
clean:
	@echo "----------Cleaning project:[ FirstChallenge - Debug ]----------"
	@cd "FirstChallenge" && "$(MAKE)" -f  "FirstChallenge.mk" clean
